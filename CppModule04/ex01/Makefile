CC = c++
CFLAGS = -std=c++98  -Wall -Wextra -Werror

SRCS =	Animal.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp\
		Cat.cpp\
		Dog.cpp\
		main.cpp\
		Brain.cpp\


OBJS = ${SRCS:.c=.o}

NAME = main

REM = rm -f

all : $(NAME) 

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :

fclean : clean
	${REM} ${NAME}

re : fclean all

.PHONY : all clean fclean re