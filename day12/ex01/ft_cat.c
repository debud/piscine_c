/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 22:29:28 by dbud              #+#    #+#             */
/*   Updated: 2016/07/21 22:29:47 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_puterr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(2, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	buffer;
	int		fd;
	int		i;

	if (argc < 2 || argv[1][0] == '-')
		while (read(0, &buffer, 1) != 0)
			write(1, &buffer, 1);
	i = 0;
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd >= 0)
			while (read(fd, &buffer, 1) != 0)
				write(1, &buffer, 1);
		else
		{
			ft_puterr("ft_cat: ");
			ft_puterr(argv[i]);
			ft_puterr(": No such file or directory\n");
		}
		close(fd);
	}
	return (0);
}
