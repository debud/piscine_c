/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 15:21:24 by dbud              #+#    #+#             */
/*   Updated: 2016/07/24 21:57:25 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"
#include <stdlib.h>
#define BUF_SIZE 1

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10 || nb <= -10)
		ft_putnbr(nb / 10);
	if (nb < 0 && nb > -10)
		ft_putchar('-');
	nb = nb % 10;
	if (nb > 0)
		ft_putchar(nb + '0');
	else
		ft_putchar(-nb + '0');
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

int		main(void)
{
	char	buf[BUF_SIZE + 1];
	int		l;
	int		c;
	char	*str;
	char	*test;

	l = 0;
	test = (char *)malloc(sizeof(char) * 4096);
	while (read(0, buf, BUF_SIZE))
	{
		test[l] = buf[0];
		l++;
	}
	test[l] = '\0';
	l = 0;
	c = 0;
	ft_line_coulumn(test, &c, &l);
	str = (char *)malloc(sizeof(char) * (l * c + 1));
	if (!str)
		return (0);
	ft_cmp_colle(str, test, c, l);
	free(str);
	return (0);
}
