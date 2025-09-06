# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/06 17:13:49 by sarasarbout       #+#    #+#              #
#    Updated: 2025/09/06 17:13:51 by sarasarbout      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
gcc -c -Wall -Wextra -Werror ft_putstr.c ft_swap.c ft_strlen.c ft_strcmp.c ft_putchar.c

ar rcs libft.a ft_strlen.o ft_strcmp.o ft_strlen.o ft_putchar.o ft_swap.o 

