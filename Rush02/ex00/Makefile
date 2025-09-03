# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/30 19:52:31 by gbarreto          #+#    #+#              #
#    Updated: 2025/08/31 22:54:22 by jmiguele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del proyecto
NAME = rush-02
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

# Fuentes y archivos de cabecera
SRC = dict.c \
      normalize_buffer.c \
      parse_dict.c \
      parse_nbr.c \
      main.c \
      print_triades.c \
      str_util.c \
      str_utils.c

# Archivos de cabecera (incluye los .h necesarios)
INCLUDES = headers.h \
           hashmap.h \
           str_util.h \
           str_utils.h \
           utils.h \
           normalize_buffer.h \
           parse_dict.h \
           parse_nbr.h \
           print_triades.h

# Archivos objeto (compilados)
OBJ = $(SRC:.c=.o)

# Regla principal para compilar el ejecutable
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Regla para compilar archivos .c a .o
%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar los archivos objeto y el ejecutable
clean:
	rm -f $(OBJ)
	rm -f $(NAME)

# Limpiar y recompilar todo
fclean: clean
	rm -f $(NAME)

re: fclean all