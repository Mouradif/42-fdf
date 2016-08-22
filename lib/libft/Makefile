# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkejji <mkejji@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/03 22:04:04 by mkejji            #+#    #+#              #
#    Updated: 2016/07/17 20:51:00 by mkejji           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FT_SRC = \
	abs			atoi		bzero		countwords	isalnum		isalpha		 \
	isascii 	isdigit		islower		isprint		isspace		isupper		 \
	itoa		lstadd		lstappend	lstdel		lstdelone	lstiter		 \
	lstmap		lstnew		max			memalloc	memccpy		memchr		 \
	memcmp		memcpy		memdel		memdump		memmove		memset		 \
	min			pow			putchar		putchar_fd	putendl		putendl_fd	 \
	puthex		putnbr		putnbr_fd	putstr		putstr_fd	strcat		 \
	strchr		strclr		strcmp		strcpy		strdel		strdigits	 \
	strdup		strequ		striter		striteri	strjoin		strlcat		 \
	strlen		strmap		strmapi		strncat		strncmp		strncpy		 \
	strndup		strnequ		strnew		strnstr		strrchr		strsplit	 \
	strstr		strsub		strtrim		tolower		toupper		lstappendnew \
	lstdelfirst	realloc		stradd		strcuthead	bufnew		bufdel		 \
	bufappend	bufcopy		putbuf		putbufnl	bufcat		strnchr		 \
	putnbrendl	bufappendchar

SRC := $(addprefix ft_, $(FT_SRC)) $(addprefix btree_, $(BTREE_SRC))

CC ?= gcc

FLAGS = -Wall -Werror -Wextra

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(addsuffix .o, $(SRC))
	$(AR) cr $@ $^
	ranlib $(NAME)

clean:
	$(RM) $(addsuffix .o, $(SRC))

fclean: clean
	$(RM) $(NAME)

test:
	$(CC) -o test test.c -L. -lft

untest:
	rm test

retest: untest test

re: fclean all
