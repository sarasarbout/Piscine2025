/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 21:06:51 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/05 21:06:53 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char s;

	s = 'z';
	while(s >= 'a')
	{
		write(1, &s, 1);
		s--;
	}
}
