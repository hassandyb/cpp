# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/10 16:09:34 by hed-dyb           #+#    #+#              #
#    Updated: 2023/12/10 16:11:33 by hed-dyb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM = rm -f

SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp

CC = c++ 

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = frag

HEADER = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

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
