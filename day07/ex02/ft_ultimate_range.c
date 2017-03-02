/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 20:42:44 by dbud              #+#    #+#             */
/*   Updated: 2016/07/14 20:55:01 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *v;

	i = 0;
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	if ((v = (int *)malloc(sizeof(int ) * (max - min + 1))) == 0)
		return (0);
	while (min < max)
	{
		v[i] = min;
		min++;
		i++;
	}
	*range = v;
	return (i);
}
