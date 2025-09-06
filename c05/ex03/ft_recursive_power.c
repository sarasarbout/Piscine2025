/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:11:31 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/06 17:11:32 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	int	i;

	if(power == 0)
		return(1);
	else if(power < 0)
		return(0);

	return(nb * (ft_recursive_power(nb , power - 1)));
}
