/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 22:26:20 by dbud              #+#    #+#             */
/*   Updated: 2016/07/12 22:48:24 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int maxsize;

	maxsize = 0;
	while (dest[maxsize] != '\0' && maxsize < size)
		maxsize++;
	size = size - maxsize;
	if (size == 0)
	{
		i = 0;
		while (src[i] != '\0')
			i++;
		return (maxsize + i);
	}
	i = 0;
	while (src[i] != '\0')
	{
		if (size != i + 1)
			dest[size + i] = src[i];
		i++;
	}
	dest[maxsize + size - 1] = '\0';
	return (maxsize + i);
}
