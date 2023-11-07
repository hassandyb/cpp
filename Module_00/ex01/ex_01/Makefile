

FALGS = -Wall -Wextra -Werror -std=c++98
CC = g++
RM = rm -f
SRC = phonebook.cpp contact.cpp
NAME = phonebook
HEADER = phonebook.hpp contact.hpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(FALGS) -c $< -o $@

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all




