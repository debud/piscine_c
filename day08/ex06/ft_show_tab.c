/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 17:26:41 by dbud              #+#    #+#             */
/*   Updated: 2016/07/16 20:15:06 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_show_nbr(int nb)
{
	if (nb >= 10 || nb <= -10)
		ft_show_nbr(nb / 10);
	if (nb < 0 && nb > -10)
		ft_putchar('-');
	if (nb > 10)
		ft_putchar(nb + '0');
	else
		ft_putchar(-nb + '0');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int e;
	int c;

	e = 0;
	while (par[e].str)
	{
		ft_putstr(par[e].copy);
		ft_putchar('\n');
		ft_show_nbr(par[e].size_param);
		ft_putchar('\n');
		c = 0;
		while (par[e].tab[c])
		{
			ft_putstr(par[e].tab[c]);
			ft_putchar('\n');
			c++;
		}
		e++;
	}
}
