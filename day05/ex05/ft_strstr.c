/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 21:00:33 by dbud              #+#    #+#             */
/*   Updated: 2016/07/12 21:01:51 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *index;
	char *check;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str != *to_find)
		{
			str += 1;
			continue ;
		}
		check = to_find;
		index = str;
		while (1)
		{
			if (*check == '\0')
				return (index);
			if (*str++ != *check++)
				break ;
		}
		str = index + 1;
	}
	return ("0");
}
