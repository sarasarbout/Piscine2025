/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 22:10:27 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/05 22:10:27 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat (char *dest, char *src, unsigned int nb)
{
        unsigned int    i;
        unsigned int    j;

        j = 0;
        i = 0;
        while (dest[i])
                i++;
        while (src[j] && j < nb)
        {
                dest[i] = src[j];
                i++;
                j++;
        }
        dest[i] = '\0';
        return (dest);
}
