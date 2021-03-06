/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 18:16:35 by dbud              #+#    #+#             */
/*   Updated: 2016/07/09 21:50:27 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_afisare(int x[13])
{
	int i;

	i = 1;
	while (i <= 8)
	{
		ft_putchar(x[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

void	ft_init(int *k, int x[13], int *nsol)
{
	*k = 1;
	x[*k] = 0;
	*nsol = 0;
}

int		ft_valid(int k, int x[8])
{
	int i;

	i = 1;
	while (i < k)
	{
		if ((x[k] == x[i]) || (k - i == x[k] - x[i]) || (k - i == x[i] - x[k]))
			return (0);
		i++;
	}
	return (1);
}

int		ft_eight_queens_puzzle(void)
{
	int x[13];
	int k;
	int nsol;
	int found;

	ft_init(&k, x, &nsol);
	while (k > 0)
	{
		found = 0;
		while ((x[k] < 8) && found == 0)
		{
			x[k]++;
			found = ft_valid(k, x);
		}
		if (found == 0)
			k--;
		else if (k == 8)
			ft_afisare(x);
		else
		{
			k++;
			x[k] = 0;
		}
	}
	return (nsol);
}
