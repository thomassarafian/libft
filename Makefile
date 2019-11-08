# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsarafia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 15:21:25 by tsarafia          #+#    #+#              #
#    Updated: 2019/11/07 17:52:04 by tsarafia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	libft.a

SRCS	=		ft_atoi.c	\
			ft_bzero.c	\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_memmove.c	\
			ft_strchr.c	\
			ft_strrchr.c	\
			ft_toupper.c

OBJS	=	$(SRCS:.c=.o)

HEAD 	=	libft.h

AR	=	ar rc

LIB	=	ranlib

GCC	=	gcc

CFLAGS	=	-Wall -Wextra -Werror

all	:	$(NAME)

$(NAME):
	$(GCC) $(CFLAGS) -c $(SRCS) -I $(HEAD)
	$(AR) $(NAME) $(OBJS)
	$(LIB) $(NAME)

clean	:
	rm -f $(OBJS)

fclean	: clean 
	rm $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
