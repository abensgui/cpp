CC = c++

CFLAGS = -std=c++98  -Wall -Wextra -Werror

SRCS =	Contact.cpp\
		PhoneBook.cpp\
		main.cpp\

OBJS = ${SRCS:.c=.o}

NAME = PhoneBook

REM = rm -f

all : $(NAME) 

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :

fclean : clean
	${REM} ${NAME}

re : fclean all

.PHONY : all clean fclean re