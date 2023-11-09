
CC = c++

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Zombie.cpp zombieHorde.cpp

NAME = zombie

HEADER = Zombie.hpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(FALGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean :  clean
	$(RM) $(NAME)

re : fclean all


