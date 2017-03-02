/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 13:34:20 by dbud              #+#    #+#             */
/*   Updated: 2016/07/12 21:11:24 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alphanumeric(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (2);
	if (c >= '0' && c <= '9')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (ft_alphanumeric(str[i]) == 1)
		str[i] -= 32;
	while (str[++i] != '\0')
	{
		if (!(ft_alphanumeric(str[i - 1])))
		{
			if (ft_alphanumeric(str[i]) == 1)
				str[i] -= 32;
		}
		else if (ft_alphanumeric(str[i]) == 2)
			str[i] += 32;
	}
	return (str);
}
