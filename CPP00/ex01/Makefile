# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 12:06:42 by mmorente          #+#    #+#              #
#    Updated: 2026/08/24 15:15:19 by mmorente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

OBJ_DIR = ../obj

# SIN DUPLICADOS: src completo
SRCS = $(shell find . -name '*.cpp' | sort -u)

HEADERS = $(shell find . -name '*.hpp' | sort -u)

OBJ = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRCS))

CC     = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@


all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
