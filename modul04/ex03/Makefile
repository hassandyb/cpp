# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 19:49:48 by hed-dyb           #+#    #+#              #
#    Updated: 2023/12/18 15:41:45 by hed-dyb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = AMateria.hpp Character.hpp Cure.hpp Ice.hpp \
		ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

NAME = game

CC = c++

RM = rm -f

FLAGS = -Wall -Werror -Wextra -std=c++98 

SRC = main.cpp  AMateria.cpp Character.cpp Cure.cpp \
		Ice.cpp MateriaSource.cpp
		

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