CC = gcc
//CFLAGS = -g -fopenmp -Wall
CFLAGS = -g -Wall
TARGET = collatz

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean: 
	rm -rf $(TARGET) *.o *.dSYM/
