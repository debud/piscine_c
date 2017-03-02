/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 10:57:31 by dbud              #+#    #+#             */
/*   Updated: 2016/07/20 12:00:40 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;
	t_list	*aux;

	i = 2;
	if (ac == 1)
		return (0);
	list = ft_create_elem(av[1]);
	while (i < ac)
	{
		aux = list;
		list = ft_create_elem(av[i]);
		list->next = aux;
		i++;
	}
	return (list);
}
