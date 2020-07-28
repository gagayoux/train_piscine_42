# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/23 16:00:30 by user42            #+#    #+#              #
#    Updated: 2020/07/23 16:00:31 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
FLAGS = -Wall -Werror -Wextra
FILESC = ft_putstr.c ft_check_operateur.c ft_atoi.c operators.c do_op.c main.c

all :
	make $(NAME)

$(NAME) : ccomp

ccomp :
	gcc $(FLAGS) -o $(NAME) $(FILESC)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all