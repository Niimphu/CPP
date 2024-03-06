CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = conversion

SOURCE =  main.cpp ScalarConverter.cpp

all: $(NAME)

$(NAME): $(SOURCE)
	clear
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SOURCE)

clean:
	-rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re