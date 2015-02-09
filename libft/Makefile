#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qcocusse <qcocusse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/25 13:55:04 by qcocusse          #+#    #+#              #
#    Updated: 2015/01/08 11:32:00 by scoudert         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME=libft.a

SRC=ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c \
ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c \
ft_strdup.c ft_strequ.c ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c \
ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strstr.c \
ft_tolower.c ft_toupper.c

OBJ=$(SRC:.c=.o)

FLAGS=-Wall -Werror -Wextra

.PHONY: all, clean, fclean, re

all:
		@make $(NAME)

$(NAME):
		@gcc $(FLAGS) -c $(SRC)
		@echo "\033[32mCompile all \".c\"\033[0m"
		@ar rc $(NAME) $(OBJ)
		@echo "\033[32mCompile all \".o\"\033[0m"
		@ranlib $(NAME)
		@echo "\033[36mCreate libft.a\033[0m"

clean:
		@rm -f $(OBJ)
		@echo "\033[31mDelete all \".o\"\033[0m"

fclean: clean
		@rm -f $(NAME)
		@echo "\033[31mDelete libft.a\033[0m"

re: fclean all
