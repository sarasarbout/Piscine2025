/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 21:58:58 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/05 22:00:42 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 32 && str[i] <= 126)
			i++;	
		else
			return(0);
	}
	return(1);
}
int main()
{
	char str[] = "sarasarbout";
	printf("%d", ft_str_is_printable(str));
}
