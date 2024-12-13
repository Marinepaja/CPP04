# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 15:31:37 by mlaporte          #+#    #+#              #
#    Updated: 2024/11/19 15:31:37 by mlaporte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ex02
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
INCLUDES = -I.

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(FLAGS) $(INCLUDES) $(OBJ) -o $(NAME)

%.o: %.cpp %.hpp
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

