# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odooms <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 11:49:17 by odooms            #+#    #+#              #
#    Updated: 2019/06/08 14:51:24 by odooms           ###   ########.fr        #
#                                                                              #
# ***************************************§************************************* #

NAME = libft.a
CC = gcc
CFLAG = -Wall -Wextra -werror
SRC = ft_isalnum.c\
	  ft_isalpha.c\
	  ft_isascii.c\
	  ft_isdigit.c\
	  ft_isprint.c\
	  ft_tolower.c\
	  ft_toupper.c\
	  ft_strcat.c\
	  ft_strcmp.c\
	  ft_strcpy.c\
	  ft_strlen.c\
	  ft_putchar.c\
	  ft_putchar_fd.c\
	  ft_putstr.c\
	  ft_putendl.c\
	  ft_strjoin.c\
	  ft_memset.c\
	  ft_memcmp.c\
	  ft_memcpy.c\
	  ft_memmove.c\
	  ft_memccpy.c\
	  ft_strncmp.c\
	  ft_bzero.c\
	  ft_strdup.c\
	  ft_strncmp.c\
	  ft_strncpy.c\
	  ft_atoi.c\
	  ft_strchr.c\
	
HD = -I libft.h

OBJ = ft_isalnum.o\
	  ft_isalpha.o\
	  ft_isascii.o\
	  ft_isdigit.o\
	  ft_isprint.o\
	  ft_tolower.o\
	  ft_toupper.o\
	  ft_strcat.o\
	  ft_strcmp.o\
	  ft_strcpy.o\
	  ft_strlen.o\
	  ft_putchar.o\
	  ft_putchar_fd.o\
	  ft_putstr.o\
	  ft_putendl.o\
	  ft_strjoin.o\
	  ft_memset.o\
	  ft_memcmp.o\
	  ft_memcpy.o\
	  ft_memmove.o\
	  ft_memccpy.o\
	  ft_strncmp.o\
	  ft_bzero.o\
	  ft_strdup.o\
	  ft_strncmp.o\
	  ft_strncpy.o\
	  ft_atoi.o\
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

