

CC = g++

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp replace.cpp

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





