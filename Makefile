
SOURCE = stack.c calculation.c validation.c parcer.c RPN.c


test: clean
	gcc -Wall -Werror -Wextra $(SOURCE) -o test -lm

clean:
	rm -rf test

leaks: test
#	leaks -atExit -- ./test
	valgrind --leak-check=full ./test
