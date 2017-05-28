# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcassar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/06 08:03:35 by mcassar           #+#    #+#              #
#    Updated: 2016/11/06 17:15:34 by mcassar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = ./srcs/
HEADERS = ./includes/
FLAGS = -Wall -Wextra -Werror
OPTIONS = -c -I $(HEADERS)
FONCTIONS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc $(OPTIONS) $(FLAGS) $(SOURCE)ft_putchar.c $(SOURCE)ft_putstr.c \
		$(SOURCE)ft_strcmp.c $(SOURCE)ft_strlen.c $(SOURCE)ft_swap.c
	ar rc $(NAME) $(FONCTIONS)

clean:
	/bin/rm -f $(FONCTIONS)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
