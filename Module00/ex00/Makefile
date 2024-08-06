NAME	= megaphone
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf


all: $(NAME)

$(NAME): megaphone.o
	$(CC) $(FLAGS) megaphone.cpp -o $(NAME)

clean:
	$(RM) megaphone.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re