# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/19 19:17:13 by user42            #+#    #+#              #
#    Updated: 2020/07/17 13:27:42 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Werror -Wextra
FILESC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
FILESO = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
FILESOPATH = ./srcs/ft_putchar.o ./srcs/ft_putstr.o ./srcs/ft_strcmp.o ./srcs/ft_strlen.o ./srcs/ft_swap.o
HEADER = ./includes/

all : $(NAME)

$(NAME) :
	gcc $(FLAGS) -I$(HEADER) -c $(FILESC) 
	ar -rcs $(NAME) $(FILESO)
	mv $(FILESO) srcs

clean :
	rm -rf $(FILESOPATH)

fclean : clean
	rm -rf $(NAME)

re : fclean all