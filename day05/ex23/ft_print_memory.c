/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 22:57:20 by dbud              #+#    #+#             */
/*   Updated: 2016/07/12 23:05:03 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_putint_hex(unsigned long int dec, int print)
{
	int	i;

	i = 0;
	if (dec / 16 > 0)
		i = i + ft_putint_hex(dec / 16, print);
	if (dec % 16 < 10)
	{
		if (print)
		{
			ft_putchar((dec % 16) + '0');
			if (dec == 0)
				ft_putchar('0');
		}
		if (dec == 0)
			i++;
		i++;
	}
	else
	{
		if (print)
			ft_putchar(((dec % 16) - 10) + 'a');
		i++;
	}
	return (i);
}

void	ft_putaddr_char(unsigned char *addr, unsigned int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (addr[i] >= ' ' && addr[i] <= '~')
			ft_putchar(addr[i]);
		else
			ft_putchar('.');
		i++;
	}
	ft_putchar('\n');
}

void	ft_putaddr(void *addr)
{
	unsigned long int	addr_int;
	unsigned int		i;

	addr_int = (unsigned long int)addr;
	i = ft_putint_hex(addr_int, 0);
	while (++i < 9)
		ft_putchar('0');
	ft_putint_hex(addr_int, 1);
	ft_putchar(':');
	ft_putchar(' ');
}

void	ft_putaddr_hex(unsigned char *addr, unsigned int len, int offset)
{
	int	i;
	int	char_int;

	i = -1;
	while (++i < len)
	{
		char_int = (int)addr[i];
		if (char_int >= 0)
			ft_putint_hex(char_int, 1);
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (i % 2)
			ft_putchar(' ');
	}
	while (offset-- > 0)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (offset % 2)
			ft_putchar(' ');
	}
	ft_putchar(' ');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int				i;
	int				len;
	int				offset;
	unsigned char	*char_bites;

	char_bites = addr;
	i = 0;
	offset = 0;
	len = 16;
	while (i < size)
	{
		if (size - i < len)
		{
			offset = len - (size - i);
			len = size - i;
		}
		ft_putaddr(char_bites);
		ft_putaddr_hex(char_bites, len, offset);
		ft_putaddr_char(char_bites, len);
		i = i + len;
		char_bites = char_bites + len;
	}
	return (addr);
}
