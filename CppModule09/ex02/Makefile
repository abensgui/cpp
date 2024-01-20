CC = c++
CPPFLAGS = -std=c++98  -Wall -Wextra -Werror

SRCS =	main.cpp\
		PmergeMe.cpp\

OBJS = ${SRCS:.cpp=.o}

NAME = PmergeMe

REM = rm -f

all : $(NAME) 

$(NAME) : $(OBJS)
		$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean :
	${REM} $(OBJS)
fclean : clean
	${REM} ${NAME}

re : fclean all

.PHONY : all clean fclean re