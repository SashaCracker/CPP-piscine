NAME = 	megaphone

ALL_CPP = megaphone.cpp

OBJ = $(patsubst %.cpp,%.o,$(ALL_CPP))

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		g++ $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp Makefile
		g++ $(FLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
