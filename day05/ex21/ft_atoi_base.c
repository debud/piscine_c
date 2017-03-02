/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 20:22:29 by dbud              #+#    #+#             */
/*   Updated: 2016/07/12 22:55:04 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_valid_str(char *str, char *base)
{
	int i;
	int j;
	int ok;

	i = 0;
	j = 0;
	if (!str[0])
		return (0);
	while (str[i++])
	{
		ok = 0;
		while (base[j] && !ok)
		{
			if (str[i] == ' ' || str[i] == '+')
				ok = 1;
			else if (str[i] == '-' || str[i] == str[j])
				ok = 1;
			j++;
		}
		if (ok == 0)
			return (0);
	}
	return (1);
}

int		ft_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_nb(char *str, char *base, int i)
{
	int nb;
	int j;
	int ok;

	nb = 0;
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			ok = 0;
			if (str[i] == base[j] && !ok)
			{
				nb *= 10;
				nb += j;
				ok = 1;
			}
			j++;
		}
		i++;
	}
	return (nb);
}

int		ft_power(int nb, int power)
{
	int p;

	p = 1;
	if (power == 0)
		return (1);
	while (power)
	{
		p *= nb;
		power--;
	}
	return (p);
}

int		ft_atoi_base(char *str, char *base)
{
	int	i;
	int nbr;
	int nbr_final;
	int minus;
	int size_base;

	i = 0;
	minus = 1;
	nbr_final = 0;
	size_base = 0;
	if (ft_valid_base(base) && ft_valid_str(str, base))
	{
		while (str[i] == ' ' || str[i] == '+')
			i++;
		if (str[i++] == '-')
			minus = -1;
		nbr = ft_nb(str, base, i);
		while (base[size_base])
			size_base++;
		i = 0;
		nbr *= 10;
		while ((nbr /= 10) > 0)
			nbr_final += (nbr % 10) * ft_power(size_base, i++);
	}
	return (minus * nbr_final);
}
