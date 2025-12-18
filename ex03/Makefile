Name= War

CC= c++ 
CFLAGS= -Wall -Wextra -Werror -std=c++98

src= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

all: $(Name)

$(Name): $(src)
	$(CC) $(CFLAGS) -o $@ $?

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

fclean: 
	rm -f $(Name)

re: fclean all
