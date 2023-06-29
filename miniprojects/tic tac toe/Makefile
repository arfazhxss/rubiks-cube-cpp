CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LIBS = -lGL -lGLU -lglut -lm

TARGET = myprogram
SRC = main.c

$(TARGET): $(SRC)
    $(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LIBS)

.PHONY: clean
clean:
    rm -f $(TARGET)

