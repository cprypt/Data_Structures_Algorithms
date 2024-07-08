CC = gcc
TARGET = main
OBJS = main.o search_algorithms.o

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) -g -o $@ $^

.c.o :
	$(CC) -g -c -o $@ $<

clean :
	rm -f $(OBJS) $(TARGET)

.PHONY : clean