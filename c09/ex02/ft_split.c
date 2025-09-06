/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:13:58 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/06 17:13:58 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_seperator(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (is_seperator(charset, str[i]))
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && !(is_seperator(charset, str[i])))
				i++;
		}
	}
	return (count);
}

char	*ft_get_word(char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i += 1;
		start += 1;
	}
	word[i] = '\0';
	return (word);
}

char	**check_and_allocate(char *str, char *charset)
{
	char	**res;

	if (str == NULL || charset == NULL)
	{
		return (NULL);
	}
	res = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (res == NULL)
		return (NULL);
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		start;
	int		word_i;

	i = 0;
	word_i = 0;
	res = check_and_allocate(str, charset);
	if (res == NULL)
		return (res);
	while (str[i])
	{
		while (is_seperator(charset, str[i]))
			i++;
		if (str[i])
		{
			start = i;
			while (str[i] && !(is_seperator(charset, str[i])))
				i++;
			res[word_i] = ft_get_word(str, start, i);
			word_i += 1;
		}
	}
	res[word_i] = NULL;
	return (res);
}
