/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:11:23 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/06 17:11:23 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial (int nb)
{
	int	i;

	if (nb < 0)
		return(0);
	if (nb == 1 || nb == 0)
		return(1);
	return (nb * ft_recursive_factorial(nb - 1));
}
