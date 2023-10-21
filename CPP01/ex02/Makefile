CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = hi

SOURCE = main.cpp

all: $(NAME)

$(NAME): $(SOURCE)
	clear
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SOURCE)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean re