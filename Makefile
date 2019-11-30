# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbudau <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 00:42:18 by gbudau            #+#    #+#              #
#    Updated: 2019/11/30 20:23:08 by gbudau           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
COMPILE.c = $(CC) $(CFLAGS) -c
OUTPUT_OPTION = -o $@
OBJ = $(subst .c,.o,$(filter-out $(wildcard ft_lst*), $(wildcard ft_*.c)))
BON_OBJ = $(subst .c,.o,$(filter $(wildcard ft_lst*), $(wildcard ft_*.c)))
   

.PHONY: all
all: $(NAME)

%.o: %.c
	$(COMPILE.c) $< $(OUTPUT_OPTION)

$(NAME): $(OBJ) 
	ar rcs $@ $^

.PHONY: bonus
bonus: $(BON_OBJ)
	ar rcs $(NAME) $^

.PHONY: clean
clean:
	$(RM) $(OBJ) $(BON_OBJ)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all

