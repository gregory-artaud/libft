# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gregory <gregory@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/28 13:46:16 by gregory           #+#    #+#              #
#    Updated: 2020/07/18 12:04:22 by gregory          ###   ########.fr        #
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
						ft_strdup.c \
						ft_substr.c \
						ft_strjoin.c \
						ft_strtrim.c \
						ft_split.c \
						ft_strndup.c \
						ft_itoa.c \
						ft_strmapi.c \
						ft_putchar_fd.c \
						ft_putstr_fd.c \
						ft_putendl_fd.c \
						ft_putnbr_fd.c
BONUS_FILES = 			ft_lstnew.c \
						ft_lstadd_front.c \
						ft_lstsize.c \
						ft_lstlast.c \
						ft_lstadd_back.c \
						ft_lstdelone.c \
						ft_lstclear.c \
						ft_lstiter.c \
						ft_lstmap.c
OBJ 		= $(FILES:%.c=%.o)
BONUS_OBJ	= $(BONUS_FILES:%.c=%.o)

all: copy $(NAME)

copy:
	cp -f libc-funcs/*.c .
	cp -f libc-additional-funcs/*.c .
	cp -f bonus-funcs/*.c .
	cp -f personal-funcs/*.c .

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

$(OBJ): $(FILES)
	$(CC) $(CFLAGS) $(FILES)

bonus: copy $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

$(BONUS_OBJ): $(BONUS_FILES)
	$(CC) $(CFLAGS) $(BONUS_FILES)

clean:
	rm -f *.o
	rm -f *.c

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
