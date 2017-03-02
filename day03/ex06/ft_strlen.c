/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 13:56:06 by dbud              #+#    #+#             */
/*   Updated: 2016/07/08 22:19:03 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int k;

	k = 0;
	while (*(str) != '\0')
	{
		k++;
		str++;
	}
	return (k);
}