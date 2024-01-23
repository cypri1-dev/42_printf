# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 17:50:17 by cyferrei          #+#    #+#              #
#    Updated: 2023/11/22 10:35:06 by cyferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_A = ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strdup.c \
			ft_calloc.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_split.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c
			
NAME = libft.a
OBJS_A = $(SRC_A:.c=.o)
OBJS_B = $(BONUS:.c=.o)
CC = cc
RM = rm -f
AR = ar rcs
FLAGS = -Wall -Wextra -Werror
HEADER_FILE = libft.h

all: $(NAME)

$(NAME): $(OBJS_A) $(HEADER_FILE)
	$(AR) $(NAME) $(OBJS_A)
	ranlib $(NAME)

bonus: $(OBJS_B)
	$(AR) $(NAME) $(OBJS_B)
	
%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $<
	
#so:
#	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC_A)
#	gcc -nostartfiles -shared -o libft.so $(OBJS_A) $(OBJS_B)

clean: 
	$(RM) $(OBJS_A) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus
