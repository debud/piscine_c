/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 11:54:34 by dbud              #+#    #+#             */
/*   Updated: 2016/07/12 23:14:03 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb > 10 || nb < -10)
		ft_putnbr(nb / 10);
	if (nb < 0 && nb > -10)
		ft_putchar('-');
	nb = nb % 10;
	if (nb > 0)
		ft_putchar(nb + '0');
	else
		ft_putchar(-nb + '0');
}
