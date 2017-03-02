/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 22:20:25 by dbud              #+#    #+#             */
/*   Updated: 2016/07/14 11:56:55 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(int argc, char **argv)
{
	int i;
	int j;
	int strlen;

	i = 1;
	strlen = 0;
	while (i != argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		strlen += j;
		i++;
	}
	return (strlen);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		strlen;
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	strlen = ft_strlen(argc, argv);
	str = malloc(sizeof(char *) * (strlen + 1));
	if (!str)
		return (0);
	while (++i != argc)
	{
		while (argv[i][j])
		{
			str[k++] = argv[i][j];
			j++;
		}
		str[k++] = '\n';
		j = 0;
	}
	str[k] = '\0';
	return (str);
}
