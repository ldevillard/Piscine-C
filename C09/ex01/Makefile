NAME = libft.a

FLAGS = -c -Wall -Wextra -Werror

all:	${NAME}

${NAME}: need.o
	ar rc ${NAME} *.o
	mv *.o srcs/

need.o: 
	gcc -c ${FLAGS} srcs/*.c includes/*.h

clean:
	rm -rf *.o srcs/*.o

fclean: clean
	rm -rf ${NAME}

re: fclean all 
