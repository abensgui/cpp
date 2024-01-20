CC = c++
CPPFLAGS = -std=c++98  -Wall -Wextra -Werror

SRCS =	main.cpp\
		BitcoinExchange.cpp\

OBJS = ${SRCS:.cpp=.o}

NAME = btc

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