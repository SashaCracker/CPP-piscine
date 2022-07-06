CPP			=	g++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
NAME		=	weapon
SRCS		=	main.cpp \
				HumanA.cpp \
				HumanB.cpp \
				Weapon.cpp \

OBJS		=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o: 		%.cpp Makefile HumanA.hpp HumanB.hpp
			$(CPP) $(FLAGS) -c $<

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re
