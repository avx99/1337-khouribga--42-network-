# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/16 11:02:04 by oabouzid          #+#    #+#              #
#    Updated: 2019/11/16 11:02:30 by oabouzid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =ft_memset.c ft_strmapi.c ft_atoi.c ft_putchar_fd.c ft_strncmp.c \
	  ft_bzero.c ft_putendl_fd.c ft_strnstr.c ft_calloc.c ft_putnbr_fd.c \
	  ft_strrchr.c ft_isalnum.c ft_putstr_fd.c ft_isalpha.c \
	  ft_split.c ft_strtrim.c ft_isascii.c ft_strchr.c ft_substr.c \
	  ft_isdigit.c ft_memccpy.c ft_strdup.c ft_tolower.c ft_isprint.c \
	  ft_memchr.c ft_strjoin.c ft_toupper.c ft_itoa.c ft_memcmp.c \
	  ft_strlcat.c ft_memcpy.c ft_strlcpy.c ft_memmove.c ft_strlen.c

OUTS = $(SRCS:.c=.o)

SRCSB = ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c \
		ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c \
		ft_lstsize_bonus.c ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c

OUTSB = $(SRCSB:.c=.o)

all : $(NAME)

$(NAME) : $(OUTS)
	    ar rcs $(NAME) $(OUTS)

bonus : $(OUTSB)
	    ar rcs $(NAME) $(OUTSB)

%.o : %.c
	gcc -Wall -Wextra -Werror -c $<

clean :
	    /bin/rm -rf $(OUTS)
		    /bin/rm -rf $(OUTSB)

fclean : clean
	    /bin/rm -rf $(NAME)

re : fclean all