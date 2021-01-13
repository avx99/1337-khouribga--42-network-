# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oennaimi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 03:13:54 by oennaimi          #+#    #+#              #
#    Updated: 2019/09/11 03:13:57 by oennaimi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = do-op

SRCS = srcs/do_op.c srcs/ft_atoi.c srcs/ft_add.c srcs/ft_div.c srcs/ft_mod.c \
	   srcs/ft_mul.c srcs/ft_sub.c


all: $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror  $(SRCS)	 -o $(NAME) 

clean:
		/bin/rm -f $(NAME)

re: clean all
