CC=gcc
CFLAGS=-Wall -Wextra -Werror
APPNAME=3D_viewer.app
TFLAGS = -lm -lcheck -lpthread
PFLAGS=$(shell pkg-config --libs --cflags check)
SRC=parser.c
TEST_SRC=test.c

all: gcov_report

s21_3D_viewer.a:
	$(CC) $(CFLAGS) -c $(SRC) parser.h
	ar rc s21_3D_viewer.a *.o
	ranlib s21_3D_viewer.a

test: undist clean s21_3D_viewer.a
	@$(CC) -c $(SRC) -o *.o $(PFLAGS)
	@$(CC) test.c s21_3D_viewer.a $(PFLAGS) -o test $(PFLAGS)
	./test

undist:
	@rm -rf obj_files
	@unzip obj_files.zip
	@rm -rf __MACOSX

gcov_report: test
	@$(CC) $(CFLAGS) --coverage test.c $(SRC) $(TFLAGS) -o gcov_test $(PFLAGS)
	@chmod +x *
	./gcov_test
	@lcov -t "gcov_test" -o gcov_test.info --no-external -c -d .
	@genhtml -o report/ gcov_test.info
	@open report/index.html

clean:
	rm -rf *.o *.a test *.info *.gcno *.gcda *.gch test_output gcov_test report

install:
	rm -rf build
	mkdir build
	cd viewer && qmake && make && mv $(APPNAME) ../build && cd ..

uninstall:
	rm -rf build*
	rm -rf viewer/moc*
	rm -rf viewer/*.o

dvi:
	makeinfo -o ./ --html --no-warn --force documentation.texi
	open ./index.html

dist: install
	zip -vr dist.zip build/$(APPNAME)

