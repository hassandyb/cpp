# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 19:21:09 by hed-dyb           #+#    #+#              #
#    Updated: 2023/11/30 13:41:29 by hed-dyb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Replace.cpp

NAME = zombie

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ) replace.hpp
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp replace.hpp
	$(CC) $(FALGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean :  clean
	$(RM) $(NAME)

re : fclean all