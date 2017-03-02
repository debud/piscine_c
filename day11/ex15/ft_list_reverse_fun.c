/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 23:37:47 by dbud              #+#    #+#             */
/*   Updated: 2016/07/20 23:38:39 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*aux;
	t_list	*last;
	t_list	*first;

	first = begin_list;
	last = 0;
	while (first)
	{
		aux = last;
		last = first;
		first = first->next;
		last->next = aux;
	}
	begin_list = last;
}
