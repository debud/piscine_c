/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 00:38:17 by dbud              #+#    #+#             */
/*   Updated: 2016/07/07 01:33:57 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '0';
	c = '0';
	while(a <= '7')
	{
		while(b <= '8')
		{
			while(c <= '9')
			{
				if(a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
				}
			}
		}
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
