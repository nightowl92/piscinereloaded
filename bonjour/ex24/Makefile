# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stherkil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 13:47:15 by stherkil          #+#    #+#              #
#    Updated: 2018/11/08 16:51:02 by stherkil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC		=	./srcs/ft_putchar.c	\
			./srcs/ft_putstr.c	\
			./srcs/ft_strcmp.c	\
			./srcs/ft_strlen.c	\
			./srcs/ft_swap.c

OBJ		=	ft_putchar.o		\
			ft_putstr.o			\
			ft_strcmp.o			\
			ft_strlen.o			\
			ft_swap.o

HDR		=	./includes/

all		:	$(NAME)

$(NAME)	:
			gcc -c  $(SRC) -I $(HDR)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)

clean:
			rm -rf $(OBJ)

fclean: clean
			rm -rf $(NAME)

re: fclean all
