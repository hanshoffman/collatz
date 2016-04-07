CC = gcc
CFLAGS = -std=c99 -Ofast
BASIC = collatz_basic
SPEEDUP = collatz_speedup

all: $(BASIC) $(SPEEDUP)

$(BASIC): $(BASIC).c
	$(CC) $(CFLAGS) -o $(BASIC) $(BASIC).c

$(SPEEDUP): $(SPEEDUP).c
	$(CC) $(CFLAGS) -o $(SPEEDUP) $(SPEEDUP).c

clean: 
	rm -rf $(BASIC) $(SPEEDUP) *.o *.dSYM/
