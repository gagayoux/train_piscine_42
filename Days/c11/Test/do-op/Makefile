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