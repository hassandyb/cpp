# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 16:51:46 by hed-dyb           #+#    #+#              #
#    Updated: 2023/12/09 16:54:29 by hed-dyb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM = rm -f

SRC = ClapTrap.cpp main.cpp ScavTrap.cpp

CC = c++ 

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = clap

HEADER = ClapTrap.hpp ScavTrap.hpp

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
