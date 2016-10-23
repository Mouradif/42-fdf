# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/20 22:04:04 by mkejji            #+#    #+#              #
#    Updated: 2016/08/22 11:45:21 by mkejji           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fdf

SRC		=	src/main.c \
			src/trace.c \
			src/parse.c \
			src/point.c

CFLAGS	= -Wall -Wextra -Werror

FW		= -framework OpenGL -framework AppKit

$(CC)	= gcc

$(NAME): all

all: libft
	$(CC) -Iincludes $(CFLAGS) $(SRC) -Llib -lft -lmlx -lm -o $(NAME) $(FW)

debug:
	$(CC) -g -Iincludes $(CFLAGS) $(SRC) -o $(NAME)_debug $(FW)

libft:
	make -C libft
	mv libft/libft.a lib

clean:
	make clean -C libft

fclean: 
	make fclean -C libft
	rm lib/libft.a
	rm $(NAME)

re:	fclean all

.PHONY: libft
