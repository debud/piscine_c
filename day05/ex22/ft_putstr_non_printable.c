/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 22:55:56 by dbud              #+#    #+#             */
/*   Updated: 2016/07/12 23:06:29 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_char_lowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

void	ft_putchar_hex(char c)
{
	char	hex;
	int		dec;

	dec = (int)c;
	ft_putchar('\\');
	if (dec <= 15)
		ft_putchar('0');
	while (dec != 0)
	{
		hex = dec % 16;
		if (hex < 10)
			hex += 48;
		else
			hex += 55;
		ft_putchar(ft_char_lowcase(hex));
		dec = dec / 16;
	}
}

int		ft_char_is_printable(char c)
{
	if (!(c >= ' ' && c <= '~'))
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]))
			ft_putchar(str[i]);
		else
			ft_putchar_hex(str[i]);
		i++;
	}
}
