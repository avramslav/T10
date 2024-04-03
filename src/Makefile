CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Werror
SOURCES = s21_string_test.c s21_string.c
OBJECTS = $(SOURCES:.c=.o)
BUILD_DIR = ./../build/

strlen_tests: STRLEN
		$(CC) $(OBJECTS) -o $(BUILD_DIR)/Quest_1.out

STRLEN:
		$(CC) -DSTRLEN $(CFLAGS) -c s21_string_test.c -o s21_string_test.o
		$(CC) -DSTRLEN $(CFLAGS) -c s21_string.c -o s21_string.o

clean:
	rm -f *.o
	rm -f $(BUILD_DIR)/Quest_1*