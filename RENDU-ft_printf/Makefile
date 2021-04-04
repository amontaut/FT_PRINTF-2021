# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/19 16:37:41 by amontaut          #+#    #+#              #
#    Updated: 2021/04/01 21:27:43 by amontaut         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c \
		sources/transform_flag.c \
	   sources/common.c \
	   sources/print_c.c \
	   sources/print_p.c \
	   sources/print_u.c \
	   sources/replace_str.c \
	   sources/print_d_i.c \
	   sources/print_flags_int.c \
	   sources/print_str.c \
	   sources/print_x.c \
	   sources/ft_atoi.c \
	   sources/ft_itoa.c \
	   sources/ft_itoa_unsigned.c \
	   sources/ft_putchar.c \
	   sources/ft_strdup.c \
	   sources/ft_strlen.c \
	   sources/ft_strstr.c \
	   sources/ft_strupcase.c \
	   sources/ft_substr.c \
	   sources/ft_calloc.c \
	   sources/ft_putnbr.c \
	   sources/ft_memdel.c \
	   sources/all_about_wildcard.c \
	   sources/utils.c


OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I.

NAME = libftprintf.a

all: 	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: 	fclean $(NAME)

.PHONY: all clean fclean re 