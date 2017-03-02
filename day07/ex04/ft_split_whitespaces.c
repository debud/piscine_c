/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 21:37:43 by dbud              #+#    #+#             */
/*   Updated: 2016/07/14 21:43:07 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_charset_delimiter(char c, char *charset)
{
	int i;

	i = -1;
	while (charset[++i] != '\0')
		if (c == charset[i])
			return (1);
	return (0);
}

int		ft_move_to_word(char *str, char *charset, int *i)
{
	int c;
	int j;

	c = 0;
	if (*i < 0 || str[*i] == '\0')
		return (c);
	*i -= 1;
	while (str[++*i] != '\0')
	{
		if (ft_is_charset_delimiter(str[*i], charset) == 0)
		{
			c++;
			j = *i;
			while (ft_is_charset_delimiter(str[++j], charset) == 0 && ++c > 0)
				;
			if (c > 0)
				break ;
		}
	}
	return (c);
}

int		ft_get_nr_words(char *str, char *charset)
{
	int words;
	int i;
	int c;

	words = 0;
	i = 0;
	c = 0;
	while ((c = ft_move_to_word(str, charset, &i)))
	{
		i += c;
		words++;
	}
	return (words);
}

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		i;
	int		j;
	int		k;
	int		c;

	i = ft_get_nr_words(str, charset);
	if (i < 1)
		return (0);
	words = (char**)malloc(sizeof(char*) * (i + 1));
	i = 0;
	c = 0;
	j = 0;
	while ((c = ft_move_to_word(str, charset, &i)))
	{
		words[j] = (char*)malloc(sizeof(char) * (c + 1));
		k = 0;
		while (k < c)
			words[j][k++] = str[i++];
		words[j++][k] = '\0';
	}
	words[j] = NULL;
	return (words);
}

char	**ft_split_whitespaces(char *str)
{
	return (ft_split(str, "\n\t "));
}
