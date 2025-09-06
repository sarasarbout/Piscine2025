/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 22:10:20 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/05 22:10:21 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while(s1[i] && i < n)
	{
		if(s1[i] != s2[i])
		{
			return(s1[i] - s2[i]);
		}
		i++;
	}
	return(s1[i] - s2[i]);
}
