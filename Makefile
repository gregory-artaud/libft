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
CFLAGS	= -Wall -Werror -Wextra -I./ -c
CC		= gcc
LIBC_DIR	= libc-funcs/
LIB_ADD_DIR	= libc-additional-funcs/
BONUS_DIR	= bonus-funcs/
PERSONAL_DIR	= personal-funcs/
DEPS		= libft.h
LIBC_FILES	= $(addprefix $(LIBC_DIR),\
						ft_memset.c \
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
						ft_strnstr.c)
LIB_ADD_FILES	= $(addprefix $(LIB_ADD_DIR),\
						ft_substr.c \
						ft_strjoin.c \
						ft_strtrim.c \
						ft_split.c \
						ft_itoa.c \
						ft_strmapi.c \
						ft_putchar_fd.c \
						ft_putstr_fd.c \
						ft_putendl_fd.c \
						ft_putnbr_fd.c)
BONUS_FILES = $(addprefix $(BONUS_DIR),\
						ft_lstnew.c \
						ft_lstadd_front.c \
						ft_lstsize.c \
						ft_lstlast.c \
						ft_lstadd_back.c \
						ft_lstdelone.c \
						ft_lstclear.c \
						ft_lstiter.c \
						ft_lstmap.c)
PERSONAL_FILES = $(addprefix $(PERSONAL_DIR),\
						ft_strndup.c)
LIBC_OBJ	= $(LIBC_FILES:%.c=%.o)
LIB_ADD_OBJ	= $(LIB_ADD_FILES:%.c=%.o)
PERSONAL_OBJ	= $(PERSONAL_FILES:%.c=%.o)
BONUS_OBJ	= $(BONUS_FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(LIBC_OBJ) $(LIB_ADD_OBJ) $(PERSONAL_OBJ)
	ar rcs $@ $^

bonus: $(LIBC_OBJ) $(LIB_ADD_OBJ) $(PERSONAL_OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $^

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(LIBC_OBJ)
	rm -f $(LIB_ADD_OBJ)
	rm -f $(PERSONAL_OBJ)
	rm -f $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
