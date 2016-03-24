CC = gcc
CFLAGS = -fopenmp -Wall
TARGET = collatz

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean: 
	rm -rf $(TARGET) *.o *.dSYM/
