# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 12:51:53 by mel-moun          #+#    #+#              #
#    Updated: 2022/10/29 16:39:56 by mel-moun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_hexalow.c\
		ft_hexaup.c\
		ft_pointer.c\
		ft_printf.c\
		ft_put_it.c\
		ft_putchar.c\
		ft_putnbr.c\
		ft_putstr.c\

OBJS=${SRCS:.c=.o}
NAME=libftprintf.a
CFLAGS=-Wall -Wextra -Werror
RM=rm -f

all:$(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $^

${NAME}:${OBJS}
	ar -rc $@ $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME) $(OBJS)

re: fclean all

.PHONY:clean fclean all re
