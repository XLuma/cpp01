NAME = zombie
CPP = c++
FLAGS = -Wall -Werror -Wextra
STD = -std=c++98
SRCS = main.cpp Zombie.cpp randomChump.cpp newZombie.cpp

.cpp.o:
	@c++ ${FLAGS}  -c $< -o ${<:.cpp=.o}
OBJS = ${SRCS:.cpp=.o}

all: $(NAME)
$(NAME):$(OBJS)
		$(CPP) $(FLAGS) $(STD) $(OBJS) -o $(NAME)

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all