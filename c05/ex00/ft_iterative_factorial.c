/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:11:18 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/06 17:11:19 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if(nb == 0 || nb == 1)
		return(1);
	if(nb < 0)
		return(0);
	while(nb > 1)
	{
		i = nb * i;
		nb--;
	}
	return(i);
}
