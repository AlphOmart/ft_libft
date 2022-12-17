# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alphom <alphom@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 15:59:41 by mwubneh           #+#    #+#              #
#    Updated: 2022/12/17 17:57:03 by alphom           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
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

OBJ_SRC = $(SRC_PART:.c=.o)

BONUS	=	./ft_lstadd_back.c\
			./ft_lstadd_front.c\
			./ft_lstclear.c\
			./ft_lstdelone.c\
			./ft_lstiter.c\
			./ft_lstlast.c \
			./ft_lstmap.c\
			./ft_lstnew.c\
			./ft_lstsize.c

OBJ_BONUS	= $(BONUS:.c=.o)

all: $(NAME)


$(NAME):	$(OBJ_SRC) 
	ar -rcs $(NAME) $(OBJ_SRC)

%.o : %.c $(HDRS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_SRC) $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME)
	
re: fclean $(NAME) 

bonus:			$(OBJ_SRC) $(OBJ_BONUS)
				ar rcs $(NAME) $(OBJS) $(OBJ_BONUS)

.PHONY: all clean fclean re
