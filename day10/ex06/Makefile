# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbud <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 20:19:38 by dbud              #+#    #+#              #
#    Updated: 2016/07/19 18:11:13 by dbud             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = arith.c main.c print.c

OUTPUT = arith.o main.o print.o

FLAGS =  -Wall -Wextra -Werror

OPTION = -c

all:
	gcc $(OPTION) $(FLAGS) $(SRCS)
	gcc $(FLAGS) $(OUTPUT) $(NAME)

clean:
	rm -rf $(OUTPUT)
