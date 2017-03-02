/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 22:28:19 by dbud              #+#    #+#             */
/*   Updated: 2016/07/21 22:28:24 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	buffer;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while (read(fd, &buffer, 1) != 0)
			write(1, &buffer, 1);
		close(fd);
		return (0);
	}
	else
	{
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		else if (argc < 2)
			write(2, "File name missing.\n", 19);
		return (1);
	}
	return (0);
}
