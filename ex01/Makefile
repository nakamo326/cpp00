NAME = phonebook

CFLAGS = -Wall -Wextra -Werror

SRC =	./phonebook.cpp

all: $(NAME)

$(NAME): $(SRC)
	clang++ -g -std=c++03 $(CFLAGS) $^ -o $@

clean:
	$(RM) $(NAME)

re: clean all

.PHONY: all clean re
