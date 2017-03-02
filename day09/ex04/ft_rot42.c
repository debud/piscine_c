/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 23:02:28 by dbud              #+#    #+#             */
/*   Updated: 2016/07/15 13:25:39 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rotate_lowercase(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (*(str + i) >= 'k')
				*(str + i) -= 10;
			else
				*(str + i) += 16;
		}
		i++;
	}
}

void	ft_rotate_uppercase(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) >= 'A' && *(str + i) >= 'Z')
		{
			if (*(str + i) >= 'K')
				*(str + i) -= 10;
			else
				*(str + i) += 16;
		}
		i++;
	}
}

char	*ft_rot42(char *str)
{
	ft_rotate_lowercase(str);
	ft_rotate_uppercase(str);
	return (str);
}
