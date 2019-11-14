# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbudau <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 00:42:18 by gbudau            #+#    #+#              #
#    Updated: 2019/11/14 18:20:08 by gbudau           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
IDIR = includes
ODIR = srcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(DEPS)
COMPILE.c = $(CC) $(CFLAGS) -c
OUTPUT_OPTION = -o $@

_DEPS = libft.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = ft_bzero.o ft_memccpy.o ft_memchr.o ft_memcmp.o \
	   ft_memcpy.o ft_memmove.o ft_memset.o ft_strchr.o \
	   ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o \
	   ft_strnstr.o ft_strrchr.o ft_isalpha.o 
	   
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

.PHONY: all
all: $(NAME)

$(ODIR)/%.o: $(ODIR)/%.c $(DEPS)
	$(COMPILE.c) $< $(OUTPUT_OPTION)

$(NAME): $(OBJ) 
	ar ruv $@ $^
	ranlib $@

.PHONY: clean
clean:
	$(RM) $(OBJ)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all

