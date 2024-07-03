NAME = megaphone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE = megaphone.cpp
OBJS = $(SOURCE:.cpp=.o)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
			rm -f *.o

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:			all clean fclean re