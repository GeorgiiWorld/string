CC= gcc
CFLAGS= -Wall -Wextra -std=c11
LDFLAGS= -lcheck
UNAME= $(shell uname -s)
ifeq ($(UNAME), Linux)
	LDFLAGS += -lm -lsubunit -lpthread -lrt
	CFLAGS += -lm
endif
source_files= *.c
object_files= Objects/*.o
source_files_test= Tests/*.c

MY_LIB_NAME= my_string.a
EXECUTABLE= test

all: clean $(MY_LIB_NAME)

$(MY_LIB_NAME): to_objects
	ar rcs $(MY_LIB_NAME) $(object_files)
	ranlib $(MY_LIB_NAME)

test: $(MY_LIB_NAME) to_objects_test
	$(CC) $(object_files) $(MY_LIB_NAME) $(LDFLAGS) -o $(EXECUTABLE)

gcov_report: $(MY_LIB_NAME) to_objects_test
	$(CC) $(source_files) $(source_files_test) $(LDFLAGS) --coverage -o $(EXECUTABLE)
	./$(EXECUTABLE)
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
ifeq ($(UNAME), Linux)
	xdg-open report/index.html
else
	open report/index.html
endif

style_check:
#	cppcheck --enable=all --suppress=missingIncludeSystem *.c *.h
	clang-format --style=Google -n *.c *.h Tests/*

leak_check: test
ifeq ($(UNAME), Linux)
	CK_FORK=no valgrind --leak-check=full --show-leak-kinds=all --tool=memcheck --trace-children=yes --track-origins=yes ./$(EXECUTABLE)
else
	CK_FORK=no leaks -atExit -- ./$(EXECUTABLE)
endif

to_objects:
	mkdir -p Objects
	cd Objects && $(CC) -c $(CFLAGS) ../$(source_files)

to_objects_test:
	mkdir -p Objects
	cd Objects && $(CC) -c $(CFLAGS) ../$(source_files_test)

clean:
	rm -rf *.o *.a *.gcno *.gcda *.info test report Objects $(EXECUTABLE)

.PHONY: clean to_objects to_objects_test leak_check style_check gcov_report test $(MY_LIB_NAME)
