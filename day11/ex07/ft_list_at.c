/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 12:51:18 by dbud              #+#    #+#             */
/*   Updated: 2016/07/20 13:36:46 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*node;

	if (nbr == 0)
		return (0);
	i = 1;
	node = begin_list;
	while (i < nbr)
	{
		if (node == 0)
			return (0);
		node = node->next;
		i++;
	}
	return (node);
}
