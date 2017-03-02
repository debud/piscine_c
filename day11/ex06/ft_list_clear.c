/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 12:02:19 by dbud              #+#    #+#             */
/*   Updated: 2016/07/20 23:17:17 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *node;
	t_list *aux;

	node = *begin_list;
	aux = 0;
	while (node)
	{
		if (!node->next)
			aux = 0;
		else
			aux = node->next;
		free(node);
		node = aux;
	}
}
