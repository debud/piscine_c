/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 13:37:58 by dbud              #+#    #+#             */
/*   Updated: 2016/07/15 14:36:50 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_bouton(int i, int j, int k)
{
	if (i > j)
	{
		if (j > k)
			return (j);
		else if (i < k)
			return (i);
		else
			return (k);
	}
	else
	{
		if (i > k)
			return (i);
		else if (k > j)
			return (j);
		else
			return (k);
	}
}
