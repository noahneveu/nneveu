# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nneveu <nneveu@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/01/27 15:05:18 by nneveu         #+#    #+#                 #
#    Updated: 2020/01/27 15:06:02 by nneveu        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	get_next_line.c

OBJECTS =	get_next_line.h

all: $(NAME)

$(NAME): $(SRCS)
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar -rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all