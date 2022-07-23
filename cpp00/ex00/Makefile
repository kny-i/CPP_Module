NAME = megaphone
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
CC = clang++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean