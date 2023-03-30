CC = c++
CFLAGS = -std=c++98  -Wall -Wextra -Werror

SRCS =	main.cpp\

OBJS = ${SRCS:.cpp=.o}

NAME = main

REM = rm -f

all : $(NAME) 

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean :
	${REM} $(OBJS)
fclean : clean
	${REM} ${NAME}

re : fclean all

.PHONY : all clean fclean re