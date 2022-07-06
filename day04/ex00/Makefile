CPP			=	clang++
FLAGS		=	-std=c++98 -g -Wall -Wextra -Werror
NAME		=	Animals
SRCS		=	main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp \
				WrongCat.cpp \
				WrongAnimal.cpp


OBJS		=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o: 		%.cpp Makefile Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
			$(CPP) $(FLAGS) -c $<

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re


