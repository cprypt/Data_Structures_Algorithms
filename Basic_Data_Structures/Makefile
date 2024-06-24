CC = gcc
TARGET = main
OBJS = main.o array.o linked_list.o stacks.o queues.o hash_tables.o

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) -g -o $@ $^

.c.o :
	$(CC) -g -c -o $@ $<

clean :
	rm -f $(OBJS) $(TARGET)

.PHONY : clean