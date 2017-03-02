/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 16:49:48 by dbud              #+#    #+#             */
/*   Updated: 2016/07/19 14:42:21 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int ascending;
	int descending;

	i = 0;
	ascending = 0;
	descending = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			ascending++;
		if (f(tab[i], tab[i + 1]) >= 0)
			descending++;
		i++;
	}
	if (ascending == length - 1)
		return (1);
	if (descending == length - 1)
		return (1);
	return (0);
}
