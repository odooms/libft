# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odooms <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 11:49:17 by odooms            #+#    #+#              #
#    Updated: 2019/07/06 07:29:23 by odooms           ###   ########.fr        #
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
	  ft_strjoin.c\
	  ft_strlen.c\
	  ft_strnew.c\
	  ft_bzero.c\
	  ft_strsub.c\
	  ft_strdup.c\
	  ft_strcpy.c\
	  ft_strdel.c\
	  ft_strchr.c\
	  
HD = -I get_next_line.h

OBJ = ft_putchar.o\
	  ft_putnbr.o\
	  ft_putstr.o\
	  ft_strcat.o\
	  ft_strjoin.o\
	  ft_strlen.o\
	  ft_strnew.o\
	  ft_bzero.o\
	  ft_strsub.o\
	  ft_strdup.o\
	  ft_strcpy.o\
	  ft_strdel.o\
	  ft_strchr.o\

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

