CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -Wshadow

NAME = weird

SOURCE = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

all: $(NAME)

$(NAME): $(SOURCE)
	clear
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SOURCE)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean re