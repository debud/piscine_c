/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 22:33:54 by dbud              #+#    #+#             */
/*   Updated: 2016/07/20 22:47:08 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list **begin_list2)
{
	t_list	*list1;
	t_list	*list2;

	list1 = *begin_list1;
	list2 = *begin_list2;
	while (list1->next)
		list1 = list1->next;
	list1->next = list2;
}
