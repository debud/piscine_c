/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 22:24:26 by dbud              #+#    #+#             */
/*   Updated: 2016/07/24 22:24:30 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_check2(int i, int j, int x, int y)
{
	if (((i == 1) && (j == 1)) || ((i == 1) && (j == x)))
		return ('A');
	else if ((i == 1 && j > 1) && (i == 1 && j < x))
		return ('B');
	else if ((i > 1 && i < y && j == 1) || (i > 1 && i < y && j == x))
		return ('B');
	else if ((i > 1 && i < y && j != 1) || (i > 1 && i < y && j != x))
		return (' ');
	else if ((i == y && j == 1) || (i == y && j == x))
		return ('C');
	else if ((i == y && j != 1) || (i == y && j != x))
		return ('B');
	return (0);
}

char	*ft_draw2(int x, int y, char *str)
{
	int i;
	int j;
	int l;

	i = 1;
	j = 1;
	l = 0;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			str[l++] = ft_check2(i, j, x, y);
			j++;
		}
		str[l++] = '\n';
		i++;
	}
	str[l] = '\0';
	return (str);
}

char	*ft_colle02(int x, int y, char *str)
{
	if (x > 0 && y > 0)
	{
		ft_draw2(x, y, str);
		return (str);
	}
	return (0);
}
