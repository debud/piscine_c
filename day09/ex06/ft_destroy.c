/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 14:45:04 by dbud              #+#    #+#             */
/*   Updated: 2016/07/15 14:47:04 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_ultimator.h>

void	ft_destroy(char ***factory)
{
	int	l;
	int	c;

	l = 0;
	c = 0;
	while (factory[l])
	{
		while (factory[l][c])
		{
			free(factory[l][c]);
			c++;
		}
		free(factory[l]);
		c++;
	}
	free(factory);
}
