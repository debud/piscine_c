/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 17:24:18 by dbud              #+#    #+#             */
/*   Updated: 2016/07/20 17:35:15 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list,
		void (*f)(void *), void *data_ref, int (*cmp)())
{
	t_list *list_ptr;

	if (begin_list)
	{
		list_ptr = begin_list;
		while (list_ptr)
		{
			if ((*cmp)(list_ptr->data, data_ref == 0))
				(*f)(list_ptr->data);
			list_ptr = list_ptr->next;
		}
	}
}
