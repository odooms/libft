# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odooms <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 11:49:17 by odooms            #+#    #+#              #
#    Updated: 2019/06/28 15:27:04 by odooms           ###   ########.fr        #
#                                                                              #
# ***************************************§************************************* #

NAME = gnl.a
CC = gcc
CFLAG = -Wall -Wextra -Werror
MAIN = main.c
SRC = ft_putchar.c\
	  ft_putnbr.c\
	  ft_putstr.c\
	  ft_strcat.c\


HD = -I get_next_line.h

OBJ = ft_putchar.o\
	  ft_putnbr.o\
	  ft_putstr.o\
	  ft_strcat.o\

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) -c $(SRC) $(HD)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

re: fclean all

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -rf $(NAME) $(OBJ)

.PHONY: clean

