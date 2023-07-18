# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msarment <msarment@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/17 17:51:14 by msarment          #+#    #+#              #
#    Updated: 2023/07/17 18:19:05 by msarment         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
FLAGS = -Wall -Werror -Wextra

SRC = \
	./srcs/ft_putchar.c \
	./srcs/ft_putstr.c \
	./srcs/ft_strcmp.c \
	./srcs/ft_strlen.c \
	./srcs/ft_swap.c 

HEADER = ./includes/

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -I $(HEADER) -c $(SRC) && ar rcs $(NAME) *.o

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all