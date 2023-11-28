# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 12:54:37 by hed-dyb           #+#    #+#              #
#    Updated: 2023/11/28 12:55:41 by hed-dyb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

RM = rm -f

HEADER = Fixed.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Fixed.cpp 

NAME = fixed

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean :  clean
	$(RM) $(NAME)

re : fclean all
