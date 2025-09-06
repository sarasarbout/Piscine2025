/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 21:15:46 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/05 21:15:47 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swaper;

	i = 0;
	while(i < (size / 2))
	{
		swaper = tab[size -i -1];
		tab[size -i -1] = tab[i];
		tab[i] = swaper;
		i++;
	}
}
