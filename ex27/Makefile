# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcassar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/06 14:24:34 by mcassar           #+#    #+#              #
#    Updated: 2016/11/06 14:57:45 by mcassar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC_FL = display_file.c
OP_FL = display_file.o

all :
	gcc -c -Wall -Wextra -Werror $(SRC_FL)
	gcc -o $(NAME) $(OP_FL)

clean :
	/bin/rm -f $(OP_FL)

fclean : clean
	/bin/rm -f $(NAME)

re: fclean all
