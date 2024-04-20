# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etom <etom@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 12:04:41 by toferrei          #+#    #+#              #
#    Updated: 2024/04/20 20:30:11 by etom             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = \
	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
	ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c\
	ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strncmp.c\
	ft_bzero.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
	ft_atoi.c ft_calloc.c ft_strdup.c\
	ft_substr.c
BSOURCES = \
	
OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

bonus: $(OBJECTS) $(BOBJECTS)
	$(AR) -r $(NAME) $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re