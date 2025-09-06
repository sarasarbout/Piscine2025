/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 21:56:31 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/05 21:56:31 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlen(const char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int i;
    unsigned int len_src;

    len_src = ft_strlen(src);


    i = 0;
	if (size != 0)
	{
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
    return len_src;
}

