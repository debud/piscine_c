/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 15:14:58 by dbud              #+#    #+#             */
/*   Updated: 2016/07/15 16:53:23 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s2 == ' ' || *s2 == '\t')
		s2++;
	while (*s1 != '\0' && (*s1 == *s2 ||
				*s1 + 32 == *s2 || *s1 - 32 == *s2))
	{
		s1++;
		s2++;
	}
	while (*s2 == ' ' || *s2 == '\t')
		s2++;
	return ((char)*s1 - (char)*s2);
}

int		main(int argc, char **argv)
{
	int i;
	int ok;

	if (argc >= 2)
	{
		i = 1;
		ok = 1;
		while (i < argc && ok)
		{
			if (!ft_strcmp("president", argv[i])
					|| !ft_strcmp("Powers", argv[i])
					|| !ft_strcmp("attack", argv[i]))
			{
				write(1, "Alert!!!\n", 9);
				ok = 0;
			}
			i++;
		}
	}
	return (0);
}
