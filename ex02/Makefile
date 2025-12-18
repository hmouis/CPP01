Name= Brain

CC= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98
src= main.cpp
obj= $(src:.cpp=.o)

all: $(Name)

$(Name): $(src)
	$(CC) $(CFLAGS) -o $@ $?

clean:
	rm -f $(obj)

fclean: 
	rm -f $(Name)

re: fclean all
