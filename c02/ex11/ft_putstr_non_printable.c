/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 22:00:20 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/05 22:00:21 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	char *hex = "0123456789abcdef";
	int i = 0;

	while(str[i])
	{
		if(str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
			write(1, "\\", 1);
			write(1, &hex[str[i] / 16], 1);
			write(1, &hex[str[i] % 16], 1);
		i++;
	}
}

int main()
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}
