NAME		= 	PhoneBook
SRCS 		= 	Contact.cpp \
				PhoneBook.cpp \
				main.cpp	
OBJS		=	$(patsubst %.cpp, %.o,$(SRCS))

CC			= 	g++
FLAGS		= 	-Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) 	: 	$(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $@
				clear

%.o 		: 	%.cpp
				$(CC) $(FLAGS) -c $< -o $@

Contact.o 	: 	Contact.cpp Contact.hpp
PhoneBook.o : 	PhoneBook.cpp PhoneBook.hpp
main.o		: 	Contact.o PhoneBook.o


clean 		:
				@rm -f $(OBJS)

fclean 		: 	clean
				@rm -f $(NAME)

re 			: 	fclean all

.PHONY 		: 	all clean fclean re
