# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/20 22:04:04 by mkejji            #+#    #+#              #
#    Updated: 2016/08/22 08:33:29 by mkejji           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fdf

SRC_A	=	libmlx.a \
			libft.a

SRC_C	=	main.c \
			trace.c \
			parse.c

SRC		= $(addprefix src/, $(SRC_C)) $(addprefix lib/, $(SRC_A))
C_FLAGS	= -Wall -Wextra -Werror
FW		= -framework OpenGL -framework AppKit

$(NAME): all

all:
	gcc -Iincludes $(CC_FLAGS) $(SRC) -o $(NAME) $(FW)

debug:
	gcc -g -Iincludes $(CC_FLAGS) $(SRC) -o $(NAME)_debug $(FW_ADD)

clean:

fclean: clean
	rm $(NAME)
