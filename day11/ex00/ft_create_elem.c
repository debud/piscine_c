/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 11:24:21 by dbud              #+#    #+#             */
/*   Updated: 2016/07/19 18:50:52 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *element;

	element = (t_list *)malloc(sizeof(t_list));
	if (element)
	{
		element->next = 0;
		element->data = data;
	}
	return (element);
}
