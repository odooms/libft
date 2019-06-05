# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odooms <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 11:49:17 by odooms            #+#    #+#              #
#    Updated: 2019/06/05 08:40:53 by odooms           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAG = -Wall -Wextra -werror
SRC = ft_isalnum.c\
	  ft_isalpha.c\
	  ft_isascii.c\
	  ft_isdigit.c\
	  ft_isprint.c\
	  ft_memalloc.c\
	  ft_memccpy.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_memcpy.c\
	  ft_memmove.c\
	  ft_memset.c\
	  ft_putchar.c
	  ft_putchar_fd.c\
	  ft_putendl.c\
	  ft_putstr.c\
	  ft_putstr_fd.c\
	  ft_strcat.c\
	  ft_strchr.c\
	  ft_strcmp.c\
	  ft_strcpy.c\
	  ft_strdup.c\
	  ft_strequ.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strjoin.c\
	  ft_strlen.c\
	  ft_strmap.c\
	  ft_strmapi.c\
	  ft_strncat.c\
	  ft_strncmp.c\
	  ft_strncpy.c\
	  ft_strnequ.c\
	  ft_strnew.c\
	  ft_strnstr.c\
	  ft_strstr.c\
	  ft_strsub.c\
	  ft_tolower.c\
	  ft_toupper.c
 
HD = -I libft.h

OBJ = ft_isalnum.o\
	  ft_isalpha.o\
	  ft_isascii.o\
	  ft_isdigit.o\
	  ft_isprint.o\
	  ft_memalloc.o\
	  ft_memccpy.o\
	  ft_memchr.o\
	  ft_memcmp.o\
	  ft_memcpy.o\
	  ft_memmove.o\
	  ft_memset.o\
	  ft_putchar.o\
	  ft_putchar_fd.o\
	  ft_putendl.o\
	  ft_putstr.o\
	  ft_putstr_fd.o\
	  ft_strcat.o\
	  ft_strchr.o\
	  ft_strcmp.o\
	  ft_strcpy.o\
	  ft_strdup.o\
	  ft_strequ.o\
	  ft_striter.o\
	  ft_striteri.o\
	  ft_strjoin.o\
	  ft_strlen.o\
	  ft_strmap.o\
	  ft_strmapi.o\
	  ft_strncat.o\
	  ft_strncmp.o\
	  ft_strncpy.o\
	  ft_strnequ.o\
	  ft_strnew.o\
	  ft_strnstr.o\
	  ft_strstr.o\
	  ft_strsub.o\
	  ft_tolower.o\
	  ft_toupper.o

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) -c $(SRC) $(HD)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

re: fclean all

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -rf $(NAME) $(OBJ)

.PHONY: clean

