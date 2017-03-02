/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 17:58:19 by dbud              #+#    #+#             */
/*   Updated: 2016/07/19 18:06:08 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OP_H
# define OP_H

# include <unistd.h>

long	ft_plus(long n1, long n2);

long	ft_minus(long n1, long n2);

long	ft_multi(long n1, long n2);

long	ft_div(long n1, long n2);

long	ft_mod(long n1, long n2);

void	ft_putchar(char c);

void	ft_putstr(char *s);

void	ft_putnbr(int nbr);

long	ft_zero(char *str);

#endif
