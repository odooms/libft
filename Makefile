# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odooms <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 11:49:17 by odooms            #+#    #+#              #
#    Updated: 2019/06/01 13:58:10 by odooms           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAG = -Wall -Wextra -werror
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	  ft_strcat.c ft_strcmp.c ft_strcpy.c ft_strlen.c ft_strncat.c \
	  ft_strchr.c\
	  ft_memset.c ft_memcpy.c ft_memcmp.c
	  ft_tolower.c ft_toupper.c \
HD = -I libft.h
OBJ = .objects/
$(NAME):
	$(CC) $(CFLAGS) -c $(SRC) $(HD)
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

