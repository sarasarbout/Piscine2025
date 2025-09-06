/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 21:07:40 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/05 21:08:01 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_combn(int n)
{
	int		arr[10];
	int		i;

	if (n <= 0 || n >= 10)
		return;
	i = -1;
	while (++i < n)
		arr[i] = i;
	while (arr[0] <= 10 - n)
	{
		i = -1;
		while (++i < n)
			write(1, &(char){arr[i] + '0'}, 1);
		if (arr[0] == 10 - n)
			break;
		write(1, ", ", 2);
		i = n - 1;
		while (i >= 0 && arr[i] == 9 - (n - 1 - i))
			i--;
		if (i >= 0)
		{
    			++arr[i];
   			 while (++i < n)
       	 			arr[i] = arr[i - 1] + 1;
		}
	}
}
