CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = harlFilter

SOURCE = main.cpp Harl.cpp

all: $(NAME)

$(NAME): $(SOURCE)
	clear
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SOURCE)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean re