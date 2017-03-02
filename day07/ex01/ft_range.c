/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 20:11:43 by dbud              #+#    #+#             */
/*   Updated: 2016/07/14 11:48:53 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *v;
	int i;
	int k;

	if (min >= max)
		return (0);
	v = (int *)malloc(sizeof(int) * (max - min + 1));
	i = min;
	k = 0;
	while (i < max)
	{
		*(v + k) = i;
		k++;
		i++;
	}
	return (v);
}
