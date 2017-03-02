# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbud <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/21 22:29:11 by dbud              #+#    #+#              #
#    Updated: 2016/07/21 22:29:15 by dbud             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Werror -Wextra $(NAME).c
	@gcc -o $(NAME) $(NAME).o

clean:
	@/bin/rm -f $(NAME).o

fclean: clean
	@/bin/rm -f $(NAME)
