CPP			=	g++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
NAME		=	ScavTrap
SRCS		=	main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp \

OBJS		=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o: 		%.cpp Makefile ClapTrap.hpp ScavTrap.hpp
			$(CPP) $(FLAGS) -c $<

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re


