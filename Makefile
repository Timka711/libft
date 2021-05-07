# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kursula <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/21 17:32:50 by kursula           #+#    #+#              #
#    Updated: 2021/05/07 17:15:05 by kursula          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = *.c

OBJ = *.o

all:
	gcc $(FLAGS) -I. -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm $(OBJ)

fclean:clean

re: fclean all
