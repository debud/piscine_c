/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 19:53:51 by dbud              #+#    #+#             */
/*   Updated: 2016/07/20 23:11:11 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

int		ft_list_size(t_list *begin_list)
{
	int		l;
	t_list	*node;

	l = 0;
	node = begin_list;
	if (node)
		while (node->next)
		{
			l++;
			node = node->next;
		}
	else
		return (0);
	return (l + 1);
}
