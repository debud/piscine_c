/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 22:12:15 by dbud              #+#    #+#             */
/*   Updated: 2016/07/12 22:23:30 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *index;

	index = dest;
	if (nb > 0)
	{
		while (*(++dest) != '\0')
		{
		}
		while (nb > 0 && *src != '\0')
		{
			*dest++ = *src++;
			nb = nb - 1;
		}
		*dest = '\0';
	}
	return (index);
}
