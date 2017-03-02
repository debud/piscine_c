/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 22:24:09 by dbud              #+#    #+#             */
/*   Updated: 2016/07/24 22:24:15 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_check1(int i, int j, int x, int y)
{
	if ((i == 1) && (j == 1))
		return ('/');
	else if ((i == 1) && (j == x))
		return ('\\');
	else if ((i == 1 && j > 1) && (i == 1 && j < x))
		return ('*');
	else if ((i > 1 && i < y && j == 1) || (i > 1 && i < y && j == x))
		return ('*');
	else if ((i > 1 && i < y && j != 1) || (i > 1 && i < y && j != x))
		return (' ');
	else if (i == y && j == 1)
		return ('\\');
	else if (i == y && j == x)
		return ('/');
	else if ((i == y && j != 1) || (i == y && j != x))
		return ('*');
	return (0);
}

char	*ft_draw1(int x, int y, char *str)
{
	int i;
	int j;
	int l;

	l = 0;
	i = 1;
	j = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			str[l++] = ft_check1(i, j, x, y);
			j++;
		}
		str[l++] = '\n';
		i++;
	}
	str[l] = '\0';
	return (str);
}

char	*ft_colle01(int x, int y, char *str)
{
	if (x > 0 && y > 0)
	{
		str = ft_draw1(x, y, str);
		return (str);
	}
	return (0);
}
