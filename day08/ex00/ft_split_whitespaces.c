/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 21:47:52 by dbud              #+#    #+#             */
/*   Updated: 2016/07/16 17:45:01 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_wordlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != ' ' && str[size] != '\n'
			&& str[size] != '\0' && str[size] != '\t')
		size++;
	return (size);
}

int		ft_nbword(char *str)
{
	int	c;
	int i;
	int ok;

	c = 0;
	i = 0;
	ok = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[i] != '\0')
	{
		ok = 0;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		while (str[i] != ' ' && str[i] != '\n'
				&& str[i] != '\t' && str[i] != '\0')
		{
			i++;
			ok = 1;
		}
		if (ok)
			c++;
	}
	return (c);
}

char	**ft_blank(char *str, int *i, char **tab, int j)
{
	while (str[*i] == ' ' || str[*i] == '\n' || str[*i] == '\t')
		(*i)++;
	if (str[*i] == '\0')
	{
		tab[j] = 0;
		return (tab);
	}
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	tab = (char**)malloc(sizeof(char*) * (ft_nbword(str) + 1));
	while (str[i] != '\0')
	{
		k = 0;
		tab = ft_blank(str, &i, tab, j);
		tab[j] = (char*)malloc(sizeof(char) * (ft_wordlen(str + i) + 1));
		while (str[i] != ' ' && str[i] != '\n' &&
				str[i] != '\t' && str[i] != '\0')
			tab[j][k++] = str[i++];
		tab[j][k] = '\0';
		j++;
	}
	tab[j] = 0;
	return (tab);
}
