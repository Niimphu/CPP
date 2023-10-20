CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = account

SOURCE = tests.cpp Account.cpp

all: $(NAME)

$(NAME): $(SOURCE)
	clear
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SOURCE)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean re