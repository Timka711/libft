# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kursula <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/21 17:32:50 by kursula           #+#    #+#              #
#    Updated: 2021/05/07 16:36:15 by kursula          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = *.c

OBJ = *.o

all: libft.a

test: re 
	mv $(NAME) ../libft-war-machine/$(NAME)
	./../libft-war-machine/grademe.sh 	

libft.a : libft.h
	gcc $(FLAGS) -I. -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm $(OBJ)

fclean:clean


re: fclean all
