# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarasarbout <sarasarbout@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/06 17:13:54 by sarasarbout       #+#    #+#              #
#    Updated: 2025/09/06 17:13:55 by sarasarbout      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/ft_putchar.c \
	./srcs/ft_swap.c \
	./srcs/ft_putstr.c \
	./srcs/ft_strlen.c \
	./srcs/ft_strcmp.c 

INCLUDES = ./includes/ft.h

OBJCT = $(SRCS:.c=.o)

SRCS_DIR = ./srcs

all: $(NAME)

$(NAME): $(OBJCT)
	ar rcs $(NAME) $(OBJCT)

$(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c
	cc -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -rf $(OBJCT)

fclean: clean
	rm -rf $(NAME)

re: fclean all
