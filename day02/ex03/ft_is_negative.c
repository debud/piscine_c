/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 23:46:37 by dbud              #+#    #+#             */
/*   Updated: 2016/07/07 00:32:54 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)

void	ft_is_negative(int n)
{
	if (n > 0 || n == 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}
