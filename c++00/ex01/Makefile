NAME	= Phonebook
RM		= rm -rf
CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address  
SRCS	= Phonebook.cpp
OBJS	= $(SRCS:%.cpp=%.o)

all:	$(NAME)

%.o : %.cpp
	$(CC) -c $(CFLAGS) -o $@ $^

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:	
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re test
