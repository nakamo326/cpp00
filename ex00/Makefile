NAME = megaphone

CFLAGS = -Wall -Wextra -Werror

SRC = ./megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	clang++ -g $(CFLAGS) $^ -o $@


clean:
	$(RM) ./megaphone

re: clean all

.PHONY: all clean re
