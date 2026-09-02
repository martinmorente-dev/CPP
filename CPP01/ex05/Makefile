# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 12:06:42 by mmorente          #+#    #+#              #
#    Updated: 2026/09/02 12:13:53 by mmorente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HARL2.0

OBJ_DIR = ../obj

# SIN DUPLICADOS: src completo + GNL solamente
SRCS = $(shell find . -name '*.cpp' | sort -u) 

OBJ = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRCS))

CC     = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

debug: CFLAGS += -g
debug: fclean $(NAME)

.PHONY: all clean fclean re
