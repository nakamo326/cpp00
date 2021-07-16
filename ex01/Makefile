NAME = phonebook
CFLAGS = -Wall -Wextra -Werror
INCLUDE = ./

SRC =	./phonebook.cpp

all: $(NAME)

$(NAME): $(SRC)
	clang++ -g -std=c++03 $(CFLAGS) $^ -I $(INCLUDE) -o $@

clean:
	$(RM) $(NAME)

re: clean all

.PHONY: all clean re
