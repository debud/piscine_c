# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpalfalv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/24 10:14:55 by lpalfalv          #+#    #+#              #
#    Updated: 2016/07/24 21:49:17 by dbud             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

OUT = colle-2

VAR = case.c colle00.c colle01.c colle02.c colle03.c colle04.c rush02.c

VARO = case.o colle00.o colle01.o colle02.o colle03.o colle04.o rush02.o

all: $(OUT)

$(OUT):
	gcc -c -Wall -Wextra -Werror $(VAR)
	gcc -o $(NAME) -Wall -Wextra -Werror $(VARO)

clean:
	/bin/rm -f $(VARO)
fclean:clean
	/bin/rm -f $(OUT)
re: fclean all
