# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gregory <gregory@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/28 13:46:16 by gregory           #+#    #+#              #
#    Updated: 2020/06/28 22:22:52 by gregory          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS	= -Wall -Werror -Wextra -c
LDFLAGS	= -shared -fPIC -g
CC		= gcc
FILES	= ft_memset.c \
						ft_memmove.c \
						ft_memcpy.c \
						ft_memccpy.c \
						ft_memcmp.c \
						ft_memchr.c \
						ft_bzero.c \
						ft_strlen.c \
						ft_isalpha.c \
						ft_isdigit.c \
						ft_isalnum.c
OBJ 	= $(FILES:%.c=%.o)

all: copy $(NAME)

copy:
	cp -f libc-funcs/*.c .

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

$(OBJ): $(FILES)
	$(CC) $(CFLAGS) $(FILES)

clean:
	rm -f *.o
	rm -f *.c

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re