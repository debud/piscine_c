/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 23:30:32 by dbud              #+#    #+#             */
/*   Updated: 2016/07/20 23:35:00 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*node;
	t_list	*aux1;
	t_list	*aux2;
	t_list	*a;
	t_list	*b;

	node = *begin_list;
	a = *begin_list;
	while (node->next)
	{
		if ((*cmp)(node->data, node->next->data) > 0)
		{
			aux1 = node;
			aux2 = node->next;
			b = aux2->next;
			a->next = aux2;
			aux2->next = aux1;
			aux1->next = b;
			node = aux2;
		}
		else
			node = node->next;
	}
}
