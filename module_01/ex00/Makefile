NAME		= 	Zombie
SRCS 		= 	Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp \
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

clean 		:
				@rm -f $(OBJS)

fclean 		: 	clean
				@rm -f $(NAME)

re 			: 	fclean all

.PHONY 		: 	all clean fclean re