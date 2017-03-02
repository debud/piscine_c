/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 21:51:09 by dbud              #+#    #+#             */
/*   Updated: 2016/07/14 21:51:26 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	if (tab == 0)
		return ;
	i = -1;
	while (tab[++i] != 0 && tab[i][0] != '\0')
	{
		j = -1;
		while (tab[i][++j] != '\0')
			ft_putchar(tab[i][j]);
		ft_putchar('\n');
	}
}
