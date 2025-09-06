/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:12:37 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/06 17:12:38 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if(min >= max)
	{
		return(0);
	}
	size = max - min;
	(*range) = (int *) malloc (sizeof(int ) * (size));
	if(*range == NULL)
	{
		return(0);
	}
	i = 0;
	while(i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return(size);
}
