# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbud <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/21 22:27:57 by dbud              #+#    #+#              #
#    Updated: 2016/07/21 22:28:04 by dbud             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Werror -Wextra $(NAME).c
	@gcc -o $(NAME) $(NAME).o

clean:
	@/bin/rm -f $(NAME).o

fclean: clean
	@/bin/rm -f $(NAME)
