# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mlokhors <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/03/20 20:04:01 by mlokhors      #+#    #+#                  #
#    Updated: 2019/03/21 14:17:09 by mlokhors      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC=gcc
NAME=ft_display_file
FLAGS=-Werror -Wextra -Wall
SRC=display_file.c
OBJECT=display_file.o

all:$(NAME)

$(NAME):
	$(CC) -c $(FLAGS) $(SRC)
	$(CC) -o $(NAME) $(SRC)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)



