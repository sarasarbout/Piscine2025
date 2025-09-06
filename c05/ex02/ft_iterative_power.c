/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:11:27 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/06 17:11:28 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int	i;
	i = nb;
	if(power ==  0)
		return(1);
	if(power < 0)
	{
		return(0);
	}
	while(power > 1)
	{
		nb = nb * i;
		power--;
	}
	return(nb);
}
