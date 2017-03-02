/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 13:48:58 by dbud              #+#    #+#             */
/*   Updated: 2017/01/13 17:58:05 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_words(char const *s, char c)
{
	int		in_word;
	size_t	nr_of_words;

	in_word = 0;
	nr_of_words = 0;
	while (*s)
	{
		if (*s == c && in_word == 1)
			in_word = 0;
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			nr_of_words++;
		}
		s++;
	}
	return (nr_of_words);
}

static	int		ft_word_length(const char *s, char c, int index)
{
	int		length;

	length = 0;
	while (s[index] && s[index] != c)
	{
		length++;
		index++;
	}
	return (length);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**matrix;
	size_t	nr_of_words;
	size_t	index;
	size_t	col;

	if (s == NULL)
		return (NULL);
	col = 0;
	index = 0;
	nr_of_words = ft_count_words(s, c);
	if ((matrix = (char**)malloc(sizeof(char*) * (nr_of_words + 1))) != NULL)
	{
		while (nr_of_words > 0)
		{
			while (s[index] == c && s[index] != '\0')
				index++;
			matrix[col] = ft_strsub(s, index, ft_word_length(s, c, index));
			col++;
			index = index + ft_word_length(s, c, index);
			nr_of_words--;
		}
		matrix[col] = 0;
	}
	return (matrix);
}
