NAME		:= phonebook

SRC_DIR		:= ./src
OBJ_DIR		:= ./obj

SRC			:=	main.cpp \
				PhoneBook.cpp \
				Contact.cpp \

OBJ			:= $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))

CPP			:= g++

FLAGS	:= -Wall -Wextra -Werror -pedantic -std=c++98

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.cpp Makefile ./src/Contact.class.hpp ./src/PhoneBook.class.hpp
	$(CPP) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CPP) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re