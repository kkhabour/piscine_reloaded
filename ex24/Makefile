# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkhabour <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/27 23:22:19 by kkhabour          #+#    #+#              #
#    Updated: 2019/03/29 20:53:41 by kkhabour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/
INCLUDES = ./includes/
FLAGS = -Wall -Wextra -Werror
FILES = $(SRC)*.c
OBJECTS = *.o

all:
	gcc $(FLAGS) -c $(FILES) $(INCLUDES)*.h
	ar rc $(NAME) $(OBJECTS)
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
