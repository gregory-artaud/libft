# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gregory <gregory@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/28 13:46:16 by gregory           #+#    #+#              #
#    Updated: 2020/06/28 14:03:47 by gregory          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ANAME	= libft.a
SONAME	= libft.so
CFLAGS	= -Wall -Werror -Wextra -I. -c
LDFLAGS	= -shared -fPIC -g
CC		= gcc
FILES	= ft_memset.c
OBJ 	= $(FILES:%.c=%.o)

all: copy $(SONAME)

copy:
	cp -f libc-funcs/*.c .

$(SONAME): $(OBJ)
	$(CC) $(LDFLAGS) $(CFLAGS) -o $(SONAME) $(OBJ)

$(ANAME): $(OBJ)
	ar rcs $(ANAME) $(OBJ)

$(OBJ): $(FILES)
	$(CC) $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)
	rm -f $(FILES)

fclean: clean
	rm -f $(ANAME)

re: fclean all

.PHONY: clean fclean all re