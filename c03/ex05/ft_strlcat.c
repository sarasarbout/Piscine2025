/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 22:11:20 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/05 22:11:21 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	len_dest = ft_strlen(dest);
	int	len_src = ft_strlen(src);
        unsigned int i = len_dest;
	int	j = 0;
	
	while(src[j] && (i + 1 < size))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return(len_dest + len_src);
}
