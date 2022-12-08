CC = gcc
CFLAGS = -Wall -lm

all: $(patsubst %.c,%,$(wildcard *.c))

run: $(TARGET)
	./$(TARGET)

$(TARGET): $(TARGET).o
	$(CC) $(CFLAGS) -o $(TARGET) $^

$(TARGET).o: $(TARGET).c
	$(CC) $(CFLAGS) -c $^

clean: 
	ls | grep -v "\." | grep -v "Makefile" | xargs rm -rf
	rm -f *.o