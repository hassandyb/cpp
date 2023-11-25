# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 19:24:14 by hed-dyb           #+#    #+#              #
#    Updated: 2023/11/22 19:26:29 by hed-dyb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Harl.cpp 

NAME = harl

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(FALGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean :  clean
	$(RM) $(NAME)

re : fclean all