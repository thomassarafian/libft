# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsarafia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 15:21:25 by tsarafia          #+#    #+#              #
#    Updated: 2019/11/13 11:34:24 by tsarafia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	libft.a

SRCS	=	ft_atoi.c			\
			ft_bzero.c			\
			ft_calloc.c			\
			ft_isalnum.c		\
			ft_isalpha.c		\
			ft_isascii.c		\
			ft_isdigit.c		\
			ft_itoa.c			\
			ft_memcpy.c			\
			ft_memccpy.c		\
			ft_memmove.c		\
			ft_memchr.c			\
			ft_memcmp.c			\
			ft_putchar_fd.c		\
			ft_putstr_fd.c		\
			ft_putendl_fd.c		\
			ft_putnbr_fd.c		\
			ft_substr.c			\
			ft_strchr.c			\
			ft_strdup.c			\
			ft_strjoin.c		\
			ft_strrchr.c		\
			ft_strlcat.c		\
			ft_strlcpy.c		\
			ft_strncmp.c		\
			ft_strnstr.c		\
			ft_strtrim.c		\
			ft_strmapi.c		\
			ft_split.c			\
			ft_toupper.c		\
			ft_tolower.c		\
			ft_isprint.c		\
			ft_strlen.c			\
			ft_lstnew.c			\
			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c

OBJS	=	$(SRCS:.c=.o)

HEAD 	=	libft.h

AR		=	ar rc

LIB		=	ranlib

GCC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

all		:	$(NAME)

$(NAME):
	$(GCC) $(CFLAGS) -c ./$(SRCS) -I $(HEAD)
	$(AR) $(NAME) $(OBJS)
	$(LIB) $(NAME)

clean	:
	rm -f $(OBJS)

fclean	: clean 
	rm -rf  $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
