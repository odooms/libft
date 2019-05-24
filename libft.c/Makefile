# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odooms <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 11:49:17 by odooms            #+#    #+#              #
#    Updated: 2019/05/24 15:39:23 by odooms           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
CC = gcc
CFLAG = -Wall Werror -Wextra
INCDIR = includes/
SRCDIR = src/
OBJSDIR = .objects/
OBJS = $(OBJSDIR), $(SRC:.c = o)
TARGET = $(NAME).a


SRC =	\	ft_memset.c	\
		ft_strcat.c	\
		ft_strchar.c	\
		ft_strcmp.c	\
		ft_strcpy.c	\
		ft_strlen.c	\
		ft_strncmp.c	\
		ft_strncpy.c	\
		ft_tolower.c	\
		ft_toupper.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isalpha.c



all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm-f $(NAME)

re: fclean all
