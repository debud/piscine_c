/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 22:14:39 by dbud              #+#    #+#             */
/*   Updated: 2016/07/24 22:16:22 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_lib.h"

char	*g_expr;

int		ret_size(char *str)
{
	int size;
	int i;

	size = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
			i++;
		else
		{
			size++;
			i++;
		}
	}
	return (size);
}

void	ret_str(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	g_expr = (char*)malloc(sizeof(*g_expr) * ret_size(str));
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
			i++;
		else
		{
			g_expr[j] = str[i];
			j++;
			i++;
		}
		g_expr[j] = '\0';
	}
}

int		expr(void)
{
	int result;

	result = termen();
	while (*g_expr == '+' || *g_expr == '-')
	{
		if (*g_expr == '+')
		{
			g_expr++;
			result = result + termen();
		}
		else
		{
			g_expr++;
			result = result - termen();
		}
	}
	return (result);
}

int		termen(void)
{
	int result;

	result = factor();
	while (*g_expr == '*' || *g_expr == '/' || *g_expr == '%')
	{
		if (*g_expr == '*')
		{
			g_expr++;
			result = result * factor();
		}
		else if (*g_expr == '%')
		{
			g_expr++;
			result = result % factor();
		}
		else
		{
			g_expr++;
			result = result / factor();
		}
	}
	return (result);
}

int		factor(void)
{
	int result;

	result = 0;
	if (*g_expr == '(')
	{
		g_expr++;
		result = expr();
		g_expr++;
	}
	else
	{
		while (*g_expr >= '0' && *g_expr <= '9')
		{
			result = result * 10 + (*g_expr - '0');
			g_expr++;
		}
	}
	return (result);
}
