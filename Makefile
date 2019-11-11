# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbudau <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 00:42:18 by gbudau            #+#    #+#              #
#    Updated: 2019/11/11 17:07:41 by gbudau           ###   ########.fr        #
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
	   ft_strnstr.o ft_strrchr.o 
	   
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(ODIR)/%.c $(DEPS)
	$(COMPILE.c) $< $(OUTPUT_OPTION)

$(NAME): $(OBJ) 
	ar ru $@ $^
	ranlib $@

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	$(RM) $(OBJ)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all

.PHONY: print-
print-%:
	@echo '$*=$($*)'

