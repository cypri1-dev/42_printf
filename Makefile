# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 16:07:12 by cyferrei          #+#    #+#              #
#    Updated: 2023/11/25 14:37:05 by cyferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT_DIR = ./libft
LIBFT_NAME = libft.a
CC = cc
RM = rm -f
AR = ar rcs
FLAGS = -Wall -Wextra -Werror
HEADER_FILE = ./libft/libft.h

SRCS = ft_printf.c \
		print_char.c \
		print_hexa.c \
		print_int.c \
		print_pointer.c \
		print_string.c \
		print_unsigned.c \
		print_percent.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

makelibft: 
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/$(LIBFT_NAME) .
	@mv $(LIBFT_NAME) $(NAME)

$(NAME): makelibft $(OBJS)
	$(AR) $(NAME) $(OBJS)
	
clean:
	$(RM) $(OBJS)
	@cd $(LIBFT_DIR) && make clean

fclean:
	$(RM) $(NAME)
	@cd $(LIBFT_DIR) && make fclean

re: fclean all

.PHONY : all clean fclean re
