NAME		= 	Animal
SRCS 		= 	main.cpp \
				Animal.cpp \
				Cat.cpp \
				Dog.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp \
				Brain.cpp
OBJS		=	$(patsubst %.cpp, %.o,$(SRCS))

DFILES		=	$(patsubst %.cpp, %.d,$(SRCS))

CC			= 	g++
FLAGS		= 	-Wall -Werror -Wextra -MMD -MP -std=c++98

all : $(NAME)

$(NAME) 	: 	$(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $@

%.o 		: 	%.cpp
				$(CC) $(FLAGS) -c $< -o $@

clean 		:
				@rm -f $(OBJS) $(DFILES)

fclean 		: 	clean
				@rm -f $(NAME)

re 			: 	fclean all

-include $(DFILES)

.PHONY 		: 	all clean fclean re
