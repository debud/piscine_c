/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 13:38:13 by dbud              #+#    #+#             */
/*   Updated: 2016/07/20 15:46:32 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*aux;
	t_list	*last;
	t_list	*first;

	first = *begin_list;
	last = 0;
	while (first)
	{
		aux = last;
		last = first;
		first = first->next;
		last->next = aux;
	}
	*begin_list = last;
}
