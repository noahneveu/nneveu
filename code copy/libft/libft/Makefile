# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nneveu <marvin@codam.nl>                     +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/04 13:59:40 by nneveu         #+#    #+#                 #
#    Updated: 2020/01/06 20:29:33 by nneveu        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_atoi.c ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_strlen.c ft_memcmp.c ft_isalpha.c \
		ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_itoa.c ft_putnbr_fd.c ft_strmapi.c ft_split.c

OBJECTS =	ft_atoi.o ft_bzero.o ft_memccpy.o ft_memchr.o ft_memcpy.o \
			ft_memmove.o ft_memset.o ft_strlen.o ft_memcmp.o ft_isalpha.o \
			ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
			ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o \
			ft_strlcpy.o ft_strlcat.o ft_strnstr.o ft_calloc.o ft_strdup.o \
			ft_substr.o ft_strjoin.o ft_strtrim.o ft_putchar_fd.o \
			ft_putstr_fd.o ft_putendl_fd.o ft_itoa.o ft_putnbr_fd.o \
			ft_strmapi.o ft_split.o

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