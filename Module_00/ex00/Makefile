

NAME = megaphone
FILES = megaphone.cpp
RM = rm -f
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

.o : .cpp
	$(CC) $(FLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all