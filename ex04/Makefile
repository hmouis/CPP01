Name= Sed

CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98
src=  main.cpp Sed.cpp
obj= $(src:.cpp=.o)
 
all: $(Name)

$(Name): $(src)
	$(CC) $(FLAGS) -o $@ $?

clean:
	rm -f $(obj)

fclean: 
	rm -f $(Name)

re: fclean all
