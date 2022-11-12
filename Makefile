# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwubneh <mwubneh@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 15:59:41 by mwubneh           #+#    #+#              #
#    Updated: 2022/11/12 16:56:34 by mwubneh          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -c
FLAGS = -Wall -Werror -Wextra
HDRS = libft.h

SRC_PART = 	./ft_isalpha.c\
			./ft_isdigit.c\
			./ft_isalnum.c\
			./ft_isascii.c\
			./ft_isprint.c\
			./ft_strlen.c\
			./ft_memset.c\
			./ft_bzero.c\
			./ft_memcpy.c\
			./ft_memmove.c\
			./ft_strlcpy.c\
			./ft_strlcat.c\
			./ft_toupper.c\
			./ft_tolower.c\
			./ft_strchr.c\
			./ft_strrchr.c\
			./ft_strncmp.c\
			./ft_memchr.c\
			./ft_memcmp.c\
			./ft_strnstr.c\
			./ft_atoi.c\
			./ft_calloc.c\
			./ft_strdup.c\
			./ft_substr.c\
			./ft_strjoin.c\
			./ft_strtrim.c\
			./ft_split.c\
			./ft_itoa.c\
			./ft_strmapi.c\
			./ft_striteri.c\
			./ft_putchar_fd.c\
			./ft_putstr_fd.c\
			./ft_putendl_fd.c\
			./ft_putnbr_fd.c

OBJ_PART = $(SRC_PART:.c=.o)

all: $(NAME) clean

$(NAME):
	$(CC) $(FLAGS) $(SRC_PART)
	ar -r $(NAME) $(OBJ_PART)

clean:
	rm -f $(OBJ_PART)

fclean: clean
	rm $(NAME)

re: fclean all

