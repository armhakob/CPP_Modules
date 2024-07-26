NAME	= replace
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

.PHONY: all fclean clean re

all: $(NAME)

$(NAME): main.o
	@ $(CC) $(FLAGS) main.cpp -o $(NAME)

clean:
	@$(RM) main.o

fclean: clean
	@$(RM) $(NAME)

re: fclean all