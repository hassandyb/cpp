# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 14:11:13 by hed-dyb           #+#    #+#              #
#    Updated: 2023/12/12 13:52:39 by hed-dyb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = Animal.hpp Dog.hpp Cat.hpp

NAME = animal

CC = c++

RM = rm -f

Flags = -wall -Werror -wextra -std=c++98

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp

OBJ = $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ) 
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
