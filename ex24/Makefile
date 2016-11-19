# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 16:44:13 by jjacobi           #+#    #+#              #
#    Updated: 2016/11/03 17:12:22 by jjacobi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SOURCE_FOLDER = ./srcs/
SRC = $(addprefix $(SOURCE_FOLDER), $(SRC_FILES))
INCLUDE_FOLDER = ./includes
OBJ = $(SRC_FILES:.c=.o)
NAME = libft.a

all: make

$(NAME): make

make:
	gcc -Wall -Werror -Wextra -c $(SRC) -I $(INCLUDE_FOLDER)
	ar rc $(NAME) $(OBJ)
	ar -s $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean make

