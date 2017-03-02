/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 19:25:51 by dbud              #+#    #+#             */
/*   Updated: 2016/07/24 21:57:13 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_line_coulumn(char *test, int *c, int *l)
{
	int i;
	int ok;

	i = 0;
	ok = 1;
	while (test[i])
	{
		if (test[i] != '\n' && ok)
			(*c)++;
		if (test[i] == '\n')
		{
			(*l)++;
			ok = 0;
		}
		i++;
	}
}

void	ft_01(char *str, char *test, int c[2], int *ok)
{
	if (ft_strcmp(ft_colle00(c[0], c[1], str), test) == 0)
	{
		ft_putstr("[colle-00] [");
		ft_putnbr(c[0]);
		ft_putstr("] [");
		ft_putnbr(c[1]);
		ft_putchar(']');
		*ok = 1;
	}
	if (ft_strcmp(ft_colle01(c[0], c[1], str), test) == 0)
	{
		if (*ok)
			ft_putstr(" || ");
		ft_putstr("[colle-01] [");
		ft_putnbr(c[0]);
		ft_putstr("] [");
		ft_putnbr(c[1]);
		ft_putchar(']');
		*ok = 1;
	}
}

void	ft_23(char *str, char *test, int c[2], int *ok)
{
	if (ft_strcmp(ft_colle02(c[0], c[1], str), test) == 0)
	{
		if (*ok)
			ft_putstr(" || ");
		ft_putstr("[colle-02] [");
		ft_putnbr(c[0]);
		ft_putstr("] [");
		ft_putnbr(c[1]);
		ft_putchar(']');
		*ok = 1;
	}
	if (ft_strcmp(ft_colle03(c[0], c[1], str), test) == 0)
	{
		if (*ok)
			ft_putstr(" || ");
		ft_putstr("[colle-03] [");
		ft_putnbr(c[0]);
		ft_putstr("] [");
		ft_putnbr(c[1]);
		ft_putchar(']');
		*ok = 1;
	}
}

void	ft_4(char *str, char *test, int c[2], int *ok)
{
	if (ft_strcmp(ft_colle04(c[0], c[1], str), test) == 0)
	{
		if (*ok)
			ft_putstr(" || ");
		ft_putstr("[colle-04] [");
		ft_putnbr(c[0]);
		ft_putstr("] [");
		ft_putnbr(c[1]);
		ft_putchar(']');
		*ok = 1;
	}
}

void	ft_cmp_colle(char *str, char *test, int c, int l)
{
	int ok;
	int vec[2];

	vec[0] = c;
	vec[1] = l;
	ok = 0;
	ft_01(str, test, vec, &ok);
	ft_23(str, test, vec, &ok);
	ft_4(str, test, vec, &ok);
	if (!ok)
		ft_putstr("aucune");
	ft_putchar('\n');
}
