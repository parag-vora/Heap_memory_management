# compiler settings
CC = gcc
CFLAGS = -Icore/inc -Wall -Wextra -g

# source files
SRCS = main.c core/src/container.c

# object files
OBJS = main.o core/src/container.o

# target executable
TARGET = a

# build target
all: $(TARGET)

# Linking object files to create the final executable
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Compile each .c file into .o file
main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

core/src/container.o: core/src/container.c
	$(CC) $(CFLAGS) -c core/src/container.c -o core/src/container.o	

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)