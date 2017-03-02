/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 16:55:47 by dbud              #+#    #+#             */
/*   Updated: 2016/07/16 20:09:35 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}

void	ft_show_nbr(int nb)
{
	if (nb >= 10 || nb <= -10)
		ft_show_nbr(nb / 10);
	if (nb < 0 && nb > -10)
		ft_putchar('-');
	nb = nb % 10;
	if (nb > 0)
		ft_putchar(nb + '0');
	else
		ft_putchar(-nb + '0');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int l;
	int k;

	l = 0;
	while (par[l].str != 0)
	{
		ft_putstr(par[l].copy);
		ft_putchar('\n');
		ft_show_nbr(par[l].size_param);
		ft_putchar('\n');
		k = 0;
		while (par[l].tab[k])
		{
			ft_putstr(par[l].tab[k]);
			ft_putchar('\n');
			k++;
		}
		l++;
	}
}
