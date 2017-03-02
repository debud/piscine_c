/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaitan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 11:26:24 by pgaitan           #+#    #+#             */
/*   Updated: 2016/07/27 18:38:16 by pgaitan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putbsq(t_bsq *bsq)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	if (bsq && bsq->map)
	{
		if (bsq->square > 0)
		{
			j = bsq->square * bsq->square;
			i = bsq->squarei;
			k = 0;
			while (j != 0)
			{
				bsq->map[i--] = bsq->full;
				k++;
				j--;
				if (k == bsq->square)
				{
					i = i - (bsq->columns + 1) + k;
					k = 0;
				}
			}
		}
		write(1, bsq->map, bsq->lines * bsq->columns + bsq->lines);
	}
}

int		main(int argc, char **argv)
{
	t_bsq	*bsq;
	int		file;

	bsq = 0;
	if (argc > 1)
	{
		file = 0;
		while (++file < argc)
		{
			bsq = ft_bsq_init(bsq);
			if (ft_bsq_read_file(bsq, argv[file]))
				ft_putbsq(bsq);
			else
				ft_putstr(BSQ_MAP_ERROR);
		}
		ft_bsq_free(bsq);
		return (0);
	}
	bsq = ft_bsq_init(bsq);
	if (ft_bsq_read_map(bsq, 0))
		ft_putbsq(bsq);
	else
		ft_putstr(BSQ_MAP_ERROR);
	ft_bsq_free(bsq);
	return (0);
}
