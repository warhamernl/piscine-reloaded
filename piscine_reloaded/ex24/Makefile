# **************************************************************************** #
#                                                                            :  #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mlokhors <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/03/20 16:36:29 by mlokhors      #+#    #+#                  #
#    Updated: 2019/03/20 18:38:21 by mlokhors      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc
FLAGS=-Werror -Wextra -Wall
SRCS= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJECT=ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
HEAD=./includes

all: $(NAME)

$(NAME):
	$(CC) -c $(FLAGS) $(SRCS) -I$(HEAD)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

