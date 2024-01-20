CC = c++
CPPFLAGS = -std=c++98  -Wall -Wextra -Werror

SRCS =	main.cpp\
		RPN.cpp\

OBJS = ${SRCS:.cpp=.o}

NAME = RPN

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