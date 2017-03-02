/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_lib.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 22:15:03 by dbud              #+#    #+#             */
/*   Updated: 2016/07/24 22:16:32 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_LIB_H
# define EVAL_LIB_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		expr();
int		termen();
int		factor();
int		ret_size(char *str);
void	ret_str(char *str);
int		eval_expr(char *str);

#endif
