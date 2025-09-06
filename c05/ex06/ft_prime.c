/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prime.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:11:44 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/06 17:11:44 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int	i;

	if(nb <= 1)
		return(0);
	else if(nb < 0)
		return(0);
	i = 2;
	while(i * i <= nb)
	{
		if(nb % i == 0)
			return(0);
		i++;
	}
	return(1);
}
