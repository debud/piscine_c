/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 18:49:05 by dbud              #+#    #+#             */
/*   Updated: 2016/07/17 18:59:29 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_valid_line(char **sudoku, int line, int nb);

int		ft_valid_coulumn(char **sudoku, int coulumn, int nb);

int		ft_valid_square(char **sudoku, int startl, int startc, int nb);

int		ft_solution_sudoku(char **sudoku);

int		ft_find(char **sudoku, int *line, int *coulumn)
{
	*line = 0;
	while ((*line) < 9)
	{
		*coulumn = 0;
		while ((*coulumn) < 9)
		{
			if (*(*(sudoku + *line) + *coulumn) == '.')
				return (1);
			(*coulumn)++;
		}
		(*line)++;
	}
	return (0);
}

int		ft_solution_sudoku(char **sudoku)
{
	int line;
	int coulumn;
	int nb;

	line = 0;
	coulumn = 0;
	if (!ft_find(sudoku, &line, &coulumn))
		return (1);
	nb = 0;
	while (++nb <= 9)
	{
		if (ft_valid_square(sudoku, line - (line % 3),
					coulumn - (coulumn % 3), nb)
				&& ft_valid_coulumn(sudoku, coulumn, nb)
				&& ft_valid_line(sudoku, line, nb))
		{
			*(*(sudoku + line) + coulumn) = nb + '0';
			if (ft_solution_sudoku(sudoku))
				return (1);
			*(*(sudoku + line) + coulumn) = '.';
		}
	}
	return (0);
}
