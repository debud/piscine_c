/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 22:28:06 by dbud              #+#    #+#             */
/*   Updated: 2016/07/08 23:16:33 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int aux;
	int ok;
	int i;
	int j;
	int k;

	ok = 1;
	k = 0;
	while (ok || !k)
	{
		k = 1;
		ok = 0;
		i = 0;
i		while (i < size - 1)
		{
			j = i + 1;
			while (j < size)
			{
				if (*(tab+j) < *(tab+i))
				{
					aux = *(tab + i);
					*(tab + i) = *(tab + j);
					*(tab + j) = aux;
					ok = 1;
				}
				j++;
			}
			i++;
		}
	}
}
