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

SRC_A	=	lib/libmlx.a \
			libft/libft.a

SRC_C	=	main.c \
			trace.c \
			parse.c \
			point.c

SRC		= $(addprefix src/, $(SRC_C)) $(SRC_A)
C_FLAGS	= -Wall -Wextra -Werror
FW		= -framework OpenGL -framework AppKit

$(NAME): all

libft:
	make all -C libft/

all: libft
	gcc -Iincludes $(CC_FLAGS) $(SRC) -o $(NAME) $(FW)

debug:
	gcc -g -Iincludes $(CC_FLAGS) $(SRC) -o $(NAME)_debug $(FW_ADD)

clean:
	make clean -C libft

fclean: 
	make fclean -C libft
	rm $(NAME)

re:	fclean all
