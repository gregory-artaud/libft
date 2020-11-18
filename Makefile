# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/28 13:46:16 by gartaud           #+#    #+#              #
#    Updated: 2020/11/18 17:03:00 by gartaud          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -c
CC			= gcc
DEPS		= libft.h
FILES		=	ft_memset.c \
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
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_strnstr.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_strndup.c
BONUS_FILES = ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c
OBJ			= $(FILES:%.c=%.o)
BONUS_OBJ	= $(BONUS_FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $^

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ)
	rm -f $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
