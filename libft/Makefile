# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalbrei <amalbrei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 19:43:26 by amalbrei          #+#    #+#              #
#    Updated: 2022/01/29 13:21:41 by amalbrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC		=	gcc
CFLAGS	=	-Wall	-Wextra	-Werror
LIB		=	ar	-rcs
RM		=	rm	-rf

INCLUDE = 	.

SRCS = 		ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c	\
			ft_isprint.c	ft_strlen.c		ft_memset.c		ft_bzero.c		\
			ft_memcpy.c		ft_memmove.c	ft_strlcpy.c	ft_strlcat.c	\
			ft_toupper.c	ft_tolower.c	ft_strchr.c		ft_strrchr.c	\
			ft_strncmp.c	ft_memchr.c		ft_memcmp.c		ft_strnstr.c	\
			ft_atoi.c		ft_calloc.c		ft_strdup.c

OBJS = 		$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY = all clean fclean re
