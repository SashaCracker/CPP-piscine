CPP			=	clang++
FLAGS		=	-std=c++98 -g -Wall -Wextra -Werror
NAME		=	convert
SRCS		=	main.cpp

OBJS		=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o: 		%.cpp Makefile
			$(CPP) $(FLAGS) -c $<

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

test:
			@ echo char_test:
			./convert c
			./convert a
			@ echo
			@ echo int_test:
			./convert 0
			./convert 42
			./convert -42
			@ echo
			@ echo float_test:
			./convert 0.0f
			./convert -4.2f
			./convert 4.2f
			@ echo
			@ echo double_test:
			./convert 0.0
			./convert -4.2
			./convert 4.2
			@ echo
			@ echo nan_inf_test:
			./convert nan
			./convert +inff
			./convert -inf
#			@ echo
#			@ echo wrong_test:
#			./convert rtgrtg dfvfv
#			./convert scsvcs

.PHONY: 	all clean fclean re test
