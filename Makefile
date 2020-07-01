# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gregory <gregory@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/28 13:46:16 by gregory           #+#    #+#              #
#    Updated: 2020/07/01 11:29:33 by gregory          ###   ########.fr        #
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
						ft_isalnum.c \
						ft_isascii.c \
						ft_isprint.c \
						ft_toupper.c \
						ft_tolower.c \
						ft_strchr.c \
						ft_strrchr.c \
						ft_strncmp.c \
						ft_strlcpy.c \
						ft_strlcat.c \
						ft_strnstr.c \
            			ft_atoi.c \
						ft_calloc.c \
						ft_strdup.c
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
