# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/12 19:16:42 by luevange          #+#    #+#              #
#    Updated: 2025/01/12 22:45:25 by luevange         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

SRCS = ft_printf.c \
       ft_nbr.c \
       ft_wrld.c

OBJS = $(SRCS:.c=.o)

LIBFT_MAKE = $(LIBFT_DIR)/Makefile

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	make -C $(LIBFT_DIR) clean  # Pulizia libft

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)  # Rimuove libft.a

re: fclean all

.PHONY: all clean fclean re