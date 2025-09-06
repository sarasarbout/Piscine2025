/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:13:20 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/06 17:13:37 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strs_to_tab.h"
#include"stdlib.h"

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}

char	*ft_strdup(char	*str)
{
	int	i;
	int	len;
	char	*ptr;

	len = ft_strlen(str) + 1;
	ptr = (char *) malloc(sizeof(char) * (len));
	if(!ptr)
		return(NULL);
	i = 0;
	while(str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return(ptr);
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str	*ptr;
	
	ptr = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));	
	if(!ptr)
		return(NULL);
	i = 0;
	while(i < ac)
	{
		ptr[i].size = ft_strlen(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = ft_strdup(av[i]);
		i++;
	}
	ptr[i].size = '\0';
	ptr[i].str = NULL; // 
	ptr[i].copy = NULL;
	return(ptr);
}
