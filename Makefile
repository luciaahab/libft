# **************************************************************************** #
#                                                                              #
#               i                                          :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmartin3 <lmartin3@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 21:12:13 by lmartin3          #+#    #+#              #
#    Updated: 2024/06/13 09:25:38 by lmartin3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_bzero.c ft_isdigit.c ft_memset.c ft_strlen.c ft_toupper.c \
			ft_isalnum.c ft_isprint.c ft_strchr.c ft_strncmp.c \
			ft_isalpha.c ft_memcpy.c ft_strlcat.c ft_strrchr.c \
			ft_isascii.c ft_memmove.c ft_strlcpy.c ft_tolower.c \

OBJS	=	$(SRCS:.c=.o)

CC	=	gcc
RM	=	rm -f
CFLAGS	=	-Wall -Wextra -Werror -I.

NAME	=	libtf.a

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs	$(NAME)	$(OBJS)

clean:
			$(RM)	$(OBJS)

fclean:	clean
			$(RM)	$(NAME)

re:	fclean	$(NAME)

.PHONY: all clean fclean re 
