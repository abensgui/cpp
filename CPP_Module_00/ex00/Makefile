CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =	megaphone.cpp\

OBJS = ${SRCS:.c=.o}

NAME = megaphone

REM = rm -f

all : $(NAME) 

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :

fclean :
	${REM} ${NAME}

re : fclean all

.PHONY : all clean fclean re