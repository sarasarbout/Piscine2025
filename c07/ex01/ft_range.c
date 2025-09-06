/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:12:33 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/06 17:12:34 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *ptr;
	int i;
	int size;

	if (start <= end)
	{
		size = end - start + 1;
	}
	else
	{
		size = start - end + 1;
	}
	
	ptr = (int *) malloc(sizeof(int) * (size));
	if (ptr == NULL)
		return (NULL);
	if (start <= end)
	{
		i = 0;
		while (start + i <= end)
		{
			ptr[i] = start + i;
			i++;
		}
	}
	else
	{
		i = 0;
		while (start - i >= end)
		{
			ptr[i] = start - i;
			i++;
		}
	}
	return (ptr);
}
