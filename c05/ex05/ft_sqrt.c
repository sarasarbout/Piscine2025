/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:11:39 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/06 17:11:40 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int	sqr;
	
	if(nb <= 0)
		return(0);
	if(nb == 1)
		return(1);
	sqr = 1;
	while(sqr * sqr <= nb)
	{
		if(sqr * sqr == nb)
			return(sqr);
		sqr++;
	}
	return(0);
}
