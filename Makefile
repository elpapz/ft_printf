# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanelas <acanelas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 03:33:56 by acanelas          #+#    #+#              #
#    Updated: 2022/12/08 18:33:35 by acanelas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 		ft_putunsigned.c \
			ft_putnumb.c \
			ft_putstr_ret_len.c \
			ft_putchar_ret_len.c \
			ft_puthex.c \
			ft_putadress.c \
			ft_printf.c \



NAME = libftprintf.a
CC = cc
CFLAGS = -c -Wall -Wextra -Werror  
ARCH = ar rcs
REMOVE = rm -f
OBF = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBF)
	$(ARCH) $(NAME) $(OBF)

clean:
	$(REMOVE) $(OBF)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re