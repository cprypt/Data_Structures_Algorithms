CC = gcc
TARGET = main
OBJS = main.o tree_data_structures.o

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) -g -o $@ $^

.c.o :
	$(CC) -g -c -o $@ $<

clean :
	rm -f $(OBJS) $(TARGET)

.PHONY : clean