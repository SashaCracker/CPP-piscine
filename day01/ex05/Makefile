CPP			=	g++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
NAME		=	harl
SRCS		=	main.cpp \
				Harl.cpp \

OBJS		=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o: 		%.cpp Makefile Harl.hpp
			$(CPP) $(FLAGS) -c $<

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re
