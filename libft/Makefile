# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmerrell <gmerrell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/08 19:42:55 by gmerrell          #+#    #+#              #
#    Updated: 2019/09/09 22:51:01 by gmerrell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c

OBJECTS = ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o

HEADER_FILES = ./

all: $(NAME)

$(NAME): $(OBJECTS) libft.h
			gcc -Wall -Wextra -Werror -I$(HEADER_FILES) -c $(SRC)
			ar rc $(NAME) $(OBJECTS)
			ranlib $(NAME)
clean:
		/bin/rm -f $(OBJECTS)
fclean: clean
		/bin/rm -f $(NAME)
re: fclean all
