# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbarreto <gbarreto@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/30 19:52:31 by gbarreto          #+#    #+#              #
#    Updated: 2025/08/30 20:30:23 by gbarreto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = rush-02
OBJECTS = $(SOURCES:.c=.o)
	
all: $(TARGET) main.o parse.o parse_nbr.o str_util.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(NAME)

fclean:
	rm -f $(NAME)
