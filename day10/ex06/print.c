/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 18:26:21 by dbud              #+#    #+#             */
/*   Updated: 2016/07/19 18:05:46 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"

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

long	ft_zero(char *str)
{
	long	n;
	int		ok;

	n = 0;
	ok = 0;
	while (*str == '\n' || *str == '\t' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		str++;
	while (*str == '0')
	{
		str++;
		ok = 1;
	}
	if (!ok && !(*str >= '1' && *str <= '9'))
		return (1);
	return (0);
}
