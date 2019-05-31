# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odooms <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 11:49:17 by odooms            #+#    #+#              #
#    Updated: 2019/05/31 12:36:23 by odooms           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAG = -Wall -Wextra -werror
SRC = ft_isalnum.c
HD = -I libft.h
OBJ = ft_isalnum.o
MAIN = main.c
$(NAME):
	$(CC) $(CFLAGS) -c $(SRC) $(HD) $(MAIN)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re: 
	fclean all

.PHONY: clean

