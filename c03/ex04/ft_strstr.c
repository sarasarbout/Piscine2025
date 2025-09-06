/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 22:10:35 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/05 22:11:17 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if(to_find[0] == '\0')
		return(str);
	while(str[i])
	{
		j = 0;
		while(str[i +j] == to_find[j] && to_find[j])
			j++;
		if(to_find[j] == '\0')
			return(&str[i]);
		i++;
	}
	return(NULL);
}
