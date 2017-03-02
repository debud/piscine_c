/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 12:30:37 by dbud              #+#    #+#             */
/*   Updated: 2016/07/20 22:53:02 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	if (!(*begin_list))
		*begin_list = ft_create_elem(data);
	else
	{
		list = *begin_list;
		while ((list)->next)
			list = list->next;
		list->next = ft_create_elem(data);
	}
}
