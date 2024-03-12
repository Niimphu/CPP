CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = convert

SOURCE =  main.cpp ScalarConverter.cpp identify.cpp utils.cpp

all: $(NAME)

$(NAME): $(SOURCE)
	clear
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SOURCE)

clean:
	-rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re