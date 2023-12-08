# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 16:16:12 by hed-dyb           #+#    #+#              #
#    Updated: 2023/12/08 18:37:57 by hed-dyb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM = rm -f

SRC = ClapTrap.cpp main.cpp

CC = c++ 

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = clap

HEADER = clapTrap.hpp

OBJ = $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
