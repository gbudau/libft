# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbudau <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 00:42:18 by gbudau            #+#    #+#              #
#    Updated: 2019/11/25 17:55:15 by gbudau           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
COMPILE.c = $(CC) $(CFLAGS) -c
OUTPUT_OPTION = -o $@

OBJ = ft_bzero.o ft_memccpy.o ft_memchr.o ft_memcmp.o \
	   ft_memcpy.o ft_memmove.o ft_memset.o ft_strchr.o \
	   ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o \
	   ft_strnstr.o ft_strrchr.o ft_isalpha.o ft_isdigit.o \
	   ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o \
	   ft_tolower.o ft_isspace.o ft_atoi.o ft_calloc.o \
	   ft_strdup.o ft_substr.o  ft_strjoin.o ft_strtrim.o \
	   ft_strndup.o ft_split.o ft_itoa.o ft_strmapi.o \
	   ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o \
	   ft_putnbr_fd.o

#BON_OBJ = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o \
		  ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o \
		  ft_lstclear.o ft_lstiter.o ft_lstmap.o
	   
.PHONY: all
all: $(NAME)

%.o: %.c
	$(COMPILE.c) $< $(OUTPUT_OPTION)

$(NAME): $(OBJ) 
	ar rc $@ $^
	ranlib $@

#.PHONY: bonus\
bonus: $(BON_OBJ)\
	ar rc $@ $^\
	ranlib $@

.PHONY: clean
clean:
	$(RM) $(OBJ) $(BON_OBJ)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all

.PHONY: test
test: fclean
	cd ../libft-unit-tests && make re  && ./run_test
	cd ../libft && make fclean
	cd ../libft-war-machine-v2019 && ./grademe.sh
	cd ../libft && make fclean
