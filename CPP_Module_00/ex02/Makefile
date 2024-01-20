CC = c++

CFLAGS = -Wall -Wextra -Werror

SRCS =	Account.cpp\
		tests.cpp\

OBJS = ${SRCS:.c=.o}

NAME = Account

REM = rm -f

all : $(NAME) 

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :

fclean : clean
	${REM} ${NAME}

.PHONY : all clean fclean re