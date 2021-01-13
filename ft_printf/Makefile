# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/27 16:48:17 by oabouzid          #+#    #+#              #
#    Updated: 2020/02/02 11:48:04 by oabouzid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INC = ft_printf.h

SRCS = ft_printf.c\
	  ft_putchar.c\
	  ft_putxpu.c\
	  ft_collectflags.c\
	  ft_putdcs.c\
	  ft_itoa_base.c\
	  ft_put.c\
	  ft_putstr.c\
	  ft_strjoin.c\
	  ft_strlen.c\
	  ft_isdigit.c\
	  ft_atoi.c\
	  ft_strchr.c\
	  ft_substr.c\
	  ft_strdup.c\

OUTS = $(SRCS:.c=.o)


all : $(NAME)

$(NAME) : $(OUTS)
	ar rcs $(NAME) $(OUTS)

%.o : %.c
	gcc -Wall -Wextra -Werror -c $<

clean :
	rm -rf $(OUTS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
