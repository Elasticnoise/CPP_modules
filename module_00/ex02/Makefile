NAME		= 	GlobalBanksters
SRCS 		= 	Account.cpp \
				tests.cpp
OBJS		=	$(patsubst %.cpp, %.o,$(SRCS))

CC			= 	g++
FLAGS		= 	-Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) 	: 	$(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $@
				clear

%.o 		: 	%.cpp
				$(CC) $(FLAGS) -c $< -o $@

Account.o 	: 	Account.cpp Account.hpp
test.o		: 	test.cpp Account.o


clean 		:
				@rm -f $(OBJS)

fclean 		: 	clean
				@rm -f $(NAME)

re 			: 	fclean all

.PHONY 		: 	all clean fclean re