/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 16:42:08 by dbud              #+#    #+#             */
/*   Updated: 2016/07/12 21:05:28 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0' && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}