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

SRC		=	main.c \
			trace.c \
			parse.c \
			point.c

C_FLAGS	= -Wall -Wextra -Werror
FW		= -framework OpenGL -framework AppKit

$(NAME): all

all: libft
	gcc -Iincludes $(CC_FLAGS) $(SRC) -o $(NAME) $(FW)

libft:
	make -C libft

debug:
	gcc -g -Iincludes $(CC_FLAGS) $(SRC) -o $(NAME)_debug $(FW_ADD)

clean:
	make clean -C libft

fclean: 
	make fclean -C libft
	rm $(NAME)

re:	fclean all
