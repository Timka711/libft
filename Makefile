# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kursula <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/21 17:32:50 by kursula           #+#    #+#              #
#    Updated: 2021/04/21 19:17:09 by kursula          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = *.c

OBJ = *.o

all: libft.a

libft.a : libft.h
	gcc $(FLAGS) -c $(SRC)
	ar rc libft.a $(OBJ)

clean:
	rm $(OBJ)

fclean: clean
   rm $(NAME);	

re: fclean
	$(NAME)
