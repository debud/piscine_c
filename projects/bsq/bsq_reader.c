/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaitan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 11:08:21 by pgaitan           #+#    #+#             */
/*   Updated: 2016/07/27 22:42:05 by pgaitan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

short	ft_bsq_read_options(t_bsq *bsq, int fd)
{
	char			buffer;
	unsigned short	size;
	char			options[2050];

	size = 0;
	while (read(fd, &buffer, 1) && buffer != '\n')
	{
		if (size > 2048)
			return (0);
		options[size++] = buffer;
	}
	options[size] = '\0';
	return (size > 3 && ft_bsq_init_options(bsq, options, size));
}

short	ft_bsq_read_map_buffer_helper(t_bsq *bsq, char c)
{
	if (c != '\n' && c != bsq->empty && c != bsq->obstacle && c != bsq->full)
		return (0);
	if (c == '\n' && ++bsq->line)
	{
		if (!bsq->weights)
		{
			bsq->line = bsq->line - 1;
			bsq->column = 0;
			return (3);
		}
		bsq->j = (bsq->line % 2) * bsq->columns;
		bsq->k = (bsq->line % 2 * -2) + 1;
		if (bsq->line > bsq->lines ||
				bsq->columns <= 0 || (bsq->columns > 0 &&
					bsq->column != bsq->columns))
			return (0);
		bsq->column = 0;
	}
	if (bsq->weights)
		ft_bsq_write_vector(bsq, c);
	if (c == '\n')
		return (2);
	return (1);
}

short	ft_bsq_read_map_buffer(t_bsq *bsq, char *buffer)
{
	short	ret;
	short	i;

	i = -1;
	while (buffer[++i] != '\0')
	{
		ret = ft_bsq_read_map_buffer_helper(bsq, buffer[i]);
		if (ret == 0)
			return (0);
		else if (ret > 1)
		{
			if (ret == 3)
			{
				bsq->columns += i;
				if (!ft_bsq_init_vectors(bsq))
					return (0);
				i = -1;
			}
		}
		else
			bsq->column++;
	}
	return (1);
}

short	ft_bsq_read_map(t_bsq *bsq, int fd)
{
	int		readed;
	char	buffer[BSQ_BUFFER_LEN + 1];

	if (!ft_bsq_read_options(bsq, fd))
		return (0);
	while ((readed = read(fd, &buffer, BSQ_BUFFER_LEN)) > 0)
	{
		buffer[readed] = '\0';
		bsq->j = (bsq->line % 2) * bsq->columns;
		bsq->k = (bsq->line % 2 * -2) + 1;
		if (!ft_bsq_read_map_buffer(bsq, buffer))
			return (0);
		if (!bsq->weights)
		{
			bsq->columns += readed;
			ft_bsq_list_push_back(&bsq->list, buffer);
		}
	}
	return (bsq->lines == bsq->line && bsq->columns > 0);
}

short	ft_bsq_read_file(t_bsq *bsq, char *fname)
{
	int		fd;
	short	ret;

	ret = 0;
	fd = open(fname, O_RDONLY);
	if (fd == -1)
		return (ret);
	if (ft_bsq_read_map(bsq, fd))
	{
		close(fd);
		ret = 1;
	}
	return (ret);
}
