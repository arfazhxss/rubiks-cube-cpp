CC = g++
CFLAGS = -std=c++11
INCLUDES = -I/usr/local/include
LIBS = -lGL -lGLEW -lglfw -lglut

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
EXECUTABLE = OpenGL

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(EXECUTABLE) $(LIBS)

.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXECUTABLE)
