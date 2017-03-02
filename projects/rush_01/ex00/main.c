/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 21:21:48 by dbud              #+#    #+#             */
/*   Updated: 2016/07/17 18:52:48 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_solution_sudoku(char **sudoku);

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_print_solution(char **sudoku)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9 - 1)
		{
			ft_putchar(*(*(sudoku + i) + j));
			ft_putchar(' ');
			j++;
		}
		ft_putchar(*(*(sudoku + i) + j));
		ft_putchar('\n');
		i++;
	}
}

int		ft_argv_valid(char *str);

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	**sudoku;

	if (argc == 10)
	{
		i = 0;
		j = 1;
		sudoku = (char **)malloc(sizeof(char*) * (9 + 1));
		while (i < 9)
		{
			if (!ft_argv_valid(argv[j]))
				return (0);
			*(sudoku + i) = (char *)malloc(sizeof(char) * (9 + 1));
			*(sudoku + i++) = argv[j++];
		}
		if (!ft_solution_sudoku(sudoku))
			ft_putstr("Erreur\n");
		else
			ft_print_solution(sudoku);
	}
	else
		ft_putstr("Erreur\n");
	return (0);
}
