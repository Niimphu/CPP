CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = RPN

SOURCE =  main.cpp RPN.cpp

all: $(NAME)

$(NAME): $(SOURCE)
	clear
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SOURCE)

clean:
	-rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re