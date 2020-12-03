NAME = BSQ

FLAGS = -Wall -Wextra -Werror

all:	${NAME}

${NAME}:  need.o
	gcc -o ${NAME} *.o

map:
	perl build_map.pl 15 15 4 > map

need.o: map
	gcc -c ${FLAGS} *.c

clean:
	rm -rf *.o

fclean: clean
	rm -rf ${NAME} map

re: fclean all

.PHONY: all map clean fclean 
