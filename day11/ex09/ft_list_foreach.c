/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 16:31:34 by dbud              #+#    #+#             */
/*   Updated: 2016/07/20 16:53:21 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;

	if (begin_list)
	{
		list_ptr = begin_list;
		while (list_ptr)
		{
			(*f)(list_ptr->data);
			list_ptr = list_ptr->next;
		}
	}
}
