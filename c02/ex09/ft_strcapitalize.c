/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 22:00:05 by sarasarbout       #+#    #+#             */
/*   Updated: 2025/09/05 22:00:05 by sarasarbout      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char    *ft_strlowcase(char *str)
{
        int     i;

        i = 0;
        while(str[i])
        {
                if(str[i] >= 'A' && str[i] <= 'Z')
                {
                        str[i] = str[i] + 32;
                }
                i++;
        }
        return(str);
}
char    *ft_strcapitalize(char *str)
{
        int i = 0;

        while(str[i])
        {
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			ft_strlowcase(str);
		}
		if (str[0] >= 'a' && str[0] <= 'z')
        	{
               		 str[0] = str[0] - 32;
        	}
                else if(str[i - 1] < 47 && (str[i] >= 'a' && str[i] <= 'z'))
                {
                        str[i] = str[i] - 32;
                }
                i++;
        }
        return(str);
}
int main()
{
        char str[] = "salut, commMnt tu vAs ? 42mots quarante-deux; cinquante+et+un";
        printf("%s", ft_strcapitalize(str));
}

