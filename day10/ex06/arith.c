/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arith.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 17:51:34 by dbud              #+#    #+#             */
/*   Updated: 2016/07/19 16:05:40 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"

long	ft_plus(long n1, long n2)
{
	return (n1 + n2);
}

long	ft_minus(long n1, long n2)
{
	return (n1 - n2);
}

long	ft_multi(long n1, long n2)
{
	return (n1 * n2);
}

long	ft_div(long n1, long n2)
{
	return (n1 / n2);
}

long	ft_mod(long n1, long n2)
{
	return (n1 % n2);
}
