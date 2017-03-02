/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 19:30:54 by dbud              #+#    #+#             */
/*   Updated: 2016/07/24 20:38:30 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_check4(int i, int j, int x, int y)
{
	if (i == 1 && j == 1)
		return ('A');
	else if ((i == 1 && j == x) || (i == y && j == 1))
		return ('C');
	else if ((i == y) && (j == x))
		return ('A');
	else if ((i == 1 || i == y) && (1 < j && j < x))
		return ('B');
	else if ((j == 1 || j == x) && (i > 1 && i < y))
		return ('B');
	else if ((i > 1 && i < y) && (j > 1 && j < x))
		return (' ');
	return (0);
}

char	*ft_draw4(int x, int y, char *str)
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
			str[l++] = ft_check4(i, j, x, y);
			j++;
		}
		i++;
		str[l++] = '\n';
	}
	str[l] = '\0';
	return (str);
}

char	*ft_colle04(int x, int y, char *str)
{
	if (x > 0 && y > 0)
	{
		str = ft_draw4(x, y, str);
		return (str);
	}
	return (0);
}
