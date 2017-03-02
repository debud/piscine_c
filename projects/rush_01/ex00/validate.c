/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 15:37:25 by dbud              #+#    #+#             */
/*   Updated: 2016/07/17 18:59:25 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_valid_line(char **sudoku, int line, int nb)
{
	int coulumn;

	coulumn = 0;
	while (coulumn < 9)
	{
		if (*(*(sudoku + line) + coulumn) == nb + '0')
			return (0);
		coulumn++;
	}
	return (1);
}

int		ft_valid_coulumn(char **sudoku, int coulumn, int nb)
{
	int line;

	line = 0;
	while (line < 9)
	{
		if (*(*(sudoku + line) + coulumn) == nb + '0')
			return (0);
		line++;
	}
	return (1);
}

int		ft_valid_square(char **sudoku, int startl, int startc, int nb)
{
	int line;
	int coulumn;

	line = 0;
	while (line < 3)
	{
		coulumn = 0;
		while (coulumn < 3)
		{
			if (*(*(sudoku + line + startl) + coulumn + startc) == nb + '0')
				return (0);
			coulumn++;
		}
		line++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *s);

int		ft_argv_valid(char *str)
{
	if (ft_strlen(str) != 9)
	{
		ft_putstr("Erreur\n");
		return (0);
	}
	return (1);
}
