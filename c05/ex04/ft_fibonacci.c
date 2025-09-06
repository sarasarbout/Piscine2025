/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:11:35 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/06 17:11:35 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	int	i;

	i = 0;
	if(index < 0)
		return(-1);
	else if(index ==  0)
		return(0);
	else if(index == 1 || index == 2)
		return(1);
	else
		return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
