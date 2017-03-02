/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 18:33:55 by dbud              #+#    #+#             */
/*   Updated: 2016/07/20 18:46:50 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list node;

	node = begin_list;
	while (node)
	{
		if ((*cmp)(node->data, data_ref) == 0)
			return (node);
		node = node->next;
	}
	return (0);
}
