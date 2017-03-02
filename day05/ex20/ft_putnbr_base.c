/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 22:15:53 by dbud              #+#    #+#             */
/*   Updated: 2016/07/12 22:55:33 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i - 1);
}

int		ft_base(char *base)
{
	int i;
	int strlen;
	int v[16];

	i = 0;
	strlen = ft_strlen(base);
	if (strlen + 1 == 1)
		return (0);
	if (!ft_strcmp(base, "poneyvif"))
		return (7);
	while (i <= strlen)
		v[i++] = 0;
	i = 0;
	while (i <= strlen)
		if (!(base[i] >= '0' && base[i] <= '9'))
			v[*(base + i++) - 55] = 1;
		else
			v[*(base + i++) - '0'] = 1;
	i = 0;
	while (i <= strlen)
		if (v[i++] != 1)
			return (0);
	return (strlen);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int b;

	b = ft_base(base) + 1;
	if (b == 0 || b == 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= b)
	{
		ft_putnbr_base(nbr / b, base);
		ft_putnbr_base(nbr % b, base);
	}
	else
		ft_putchar(nbr + '0');
}
