CC = gcc
CFLAGS = -std=c11 -Wall -Werror -Wextra -g
OBJECTS = $(SOURCES:.c=.o)
TEST_SOURCES = source/*.c
OS=$(shell uname -s)
QMAKE = qmake.exe
BD=../build/
MAN=./Documentation
APP=$(BD)SmartCalc.app

ifeq ($(OS), Darwin)
	TEST_LIBS = -lcheck
	HTML_CREATE=lcov -t a.out -o report.info -c -d .; genhtml -o report report.info
else
	TEST_LIBS = -lcheck -lsubunit -pthread -lrt -lm
	HTML_CREATE=gcov -b -l -p -c s21_string.gcno; gcovr -g -k -r . --html --html-details -o report.html; mv report.s21_string.c.html report.html
endif

all: build

build: $(BD)SmartCalc.pro
	cd $(BD); qmake SmartCalc.pro
	make -C $(BD)

./$(BD)SmartCalc.pro:
	cp SmartCalc.pro $(BD)

install: build
	@mkdir $(HOME)/Applications/SmartCalc/ 2>/dev/null
	cp -rf $(APP) $(HOME)/Applications/SmartCalc/
	cp -rf $(MAN) $(HOME)/Applications/SmartCalc/
	make clean		

test: clean
	$(CC) $(CFLAGS) $(TEST_SOURCES) unit_test.c -o test $(TEST_LIBS) -L. --coverage
	./test

dist:
	tar -cvf $(HOME)/Applications/SmartCalc/../SmartCalc.tar $(HOME)/Applications/SmartCalc.app/ ./doc.pdf
	gzip $(HOME)/Applications/SmartCalc/../SmartCalc.tar

clean:
		rm -rf *.o *.a *.so *.gcda *.gcno *.gch rep.info *.html *.css test report *.txt test.info test.dSYM *.out *.gcov

gcov_report: test
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	rm -rf *.gcda *.gcno *.gcov