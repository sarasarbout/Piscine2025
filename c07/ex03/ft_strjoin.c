/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:12:50 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/06 17:12:51 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	if (size > 0)
	{
		len = len + ft_strlen(sep) * (size - 1);
	}
	return (len + 1);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	total;
	char	*ptr;

	total = ft_total_length(size, strs, sep);
	ptr = (char *)malloc(sizeof(char) * (total));
	if (ptr == NULL)
		return(NULL);
	ptr[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat (ptr, strs[i]);
		if (i < size - 1)
			ft_strcat (ptr, sep);
		i++;
	}
	return (ptr);
}

int main()
{
	char *str[] = {"1337", "42", "Floona"};
	char sep[] = ", ";
	int size = 3;
	printf("%s", ft_strjoin(size, str, sep));
}
