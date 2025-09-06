/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 22:00:15 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/05 22:00:16 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while(str[i])
        {
                i++;
        }
        return(i);
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
        unsigned int i = 0;
        int len_src = ft_strlen(src);
	int len_dest = ft_strlen(dest);

	if (size == 0)
		return (len_src);
        while(src[i] && i < size - 1)
        {
                dest[i] = src[i];
                i++;
        }
	len_dest = ft_strlen(dest);
        dest[i] = '\0';
        return(len_dest);
}
#include <string.h>
int main()
{
        char dest[20];
        char src[] = "Hello";
        printf("%lu\n", strlcpy(dest, src, 20));
	printf("%u", ft_strlcpy(dest, src, 20));
}

