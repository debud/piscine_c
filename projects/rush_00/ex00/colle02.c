/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 15:18:37 by capop             #+#    #+#             */
/*   Updated: 2016/07/10 20:06:09 by capop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_check(int i, int j, int x, int y)
{
	if (((i == 1) && (j == 1)) || ((i == 1) && (j == x)))
		ft_putchar('A');
	else if ((i == 1 && j > 1) && (i == 1 && j < x))
		ft_putchar('B');
	else if ((i > 1 && i < y && j == 1) || (i > 1 && i < y && j == x))
		ft_putchar('B');
	else if ((i > 1 && i < y && j != 1) || (i > 1 && i < y && j != x))
		ft_putchar(' ');
	else if ((i == y && j == 1) || (i == y && j == x))
		ft_putchar('C');
	else if ((i == y && j != 1) || (i == y && j != x))
		ft_putchar('B');
}

void	ft_draw(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			ft_check(i, j, x, y);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

void	colle(int x, int y)
{
	if (x > 0 && y > 0)
		ft_draw(x, y);
	else
		return ;
}
