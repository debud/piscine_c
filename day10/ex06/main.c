/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 17:31:22 by dbud              #+#    #+#             */
/*   Updated: 2016/07/19 18:13:12 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"

long	ft_atol(char *str)
{
	long	n;
	int		minus;

	n = 0;
	minus = 0;
	while (*str == '\n' || *str == '\t' || *str == ' ')
		str++;
	if (*str >= 'A' && *str <= 'z')
		return (0);
	if (*str == '-')
	{
		minus = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + *str - '0';
		str++;
	}
	if (minus)
		n = n * (-1);
	return (n);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		ft_valid_operator(char *op)
{
	if (ft_strcmp(op, "+") == 0)
		return (0);
	if (ft_strcmp(op, "-") == 0)
		return (1);
	if (ft_strcmp("*", op) == 0)
		return (2);
	if (ft_strcmp(op, "/") == 0)
		return (3);
	if (ft_strcmp(op, "%") == 0)
		return (4);
	return (5);
}

void	ft_print(long n1, long n2, long op, long (*arith[6])(long, long))
{
	if (n2 == 0 && op == 3)
		ft_putstr("Stop : division by zero\n");
	else if (n2 == 0 && op == 4)
		ft_putstr("Stop : modulo by zero\n");
	else
		ft_putnbr(arith[op](n1, n2));
}

int		main(int argc, char **argv)
{
	long n1;
	long n2;
	long op;
	long (*arith[6])(long, long);
	long zero;

	arith[0] = &ft_plus;
	arith[1] = &ft_minus;
	arith[2] = &ft_multi;
	arith[3] = &ft_div;
	arith[4] = &ft_mod;
	if (argc == 4)
	{
		zero = ft_zero(argv[3]);
		n1 = ft_atol(argv[1]);
		n2 = ft_atol(argv[3]);
		op = ft_valid_operator(argv[2]);
		if (op == 5 || (zero && (op == 3 || op == 4)))
			ft_putchar('0');
		else
			ft_print(n1, n2, op, arith);
	}
	return (0);
}
