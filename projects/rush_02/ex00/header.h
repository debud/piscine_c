/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 15:52:34 by dbud              #+#    #+#             */
/*   Updated: 2016/07/24 21:57:41 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

char	*ft_colle00(int x, int y, char *str);

char	*ft_colle01(int x, int y, char *str);

char	*ft_colle02(int x, int y, char *str);

char	*ft_colle03(int x, int y, char *str);

char	*ft_colle04(int x, int y, char *str);

void	ft_cmp_colle(char *str, char *test, int c, int l);

void	ft_line_coulumn(char *test, int *c, int *l);

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2);

void	ft_putstr(char *s);

void	ft_putnbr(int nb);

#endif
