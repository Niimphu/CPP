CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = easyfind

SOURCE =  main.cpp

all: $(NAME)

$(NAME): $(SOURCE)
	clear
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SOURCE)

clean:
	-rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re