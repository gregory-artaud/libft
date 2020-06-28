# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gregory <gregory@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/28 13:46:16 by gregory           #+#    #+#              #
#    Updated: 2020/06/28 15:08:33 by gregory          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ANAME	= libft.a
NAME	= $(ANAME)
SONAME	= libft.so
CFLAGS	= -Wall -Werror -Wextra -c
LDFLAGS	= -shared -fPIC -g
CC		= gcc
FILES	= ft_memset.c
OBJ 	= $(FILES:%.c=%.o)

all: copy $(NAME)

so: $(SONAME)

$(NAME): $(ANAME)

copy:
	cp -f libc-funcs/*.c .

$(SONAME): SO/$(OBJ)
	$(CC) -shared -o $@ $(OBJ)

SO/$(OBJ): $(FILES)
	$(CC) -fPIC $(CFLAGS) $(FILES)

$(ANAME): $(OBJ)
	ar rcs $(ANAME) $(OBJ)

$(OBJ): $(FILES)
	$(CC) $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)
	rm -f $(FILES)

fclean: clean
	rm -f $(ANAME)
	rm -f $(SONAME)

re: fclean all

.PHONY: clean fclean all re