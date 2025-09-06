/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 21:55:43 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/05 21:55:44 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy (char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
#include <string.h>
int main()
{
	char dest[20] = "Hello";
	char src[] = "sara";
	unsigned int n = 3;
        printf("%s", strncpy(dest, src, 3));
	printf("%s", ft_strncpy(dest, src, 3));
}
