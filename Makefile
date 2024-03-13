TARGET := cf-converter

CC := gcc

.PHONY: all clean

all: $(TARGET)

$(TARGET): main.c utilities.c utilities.h pages.c pages.h
	$(CC) -o $@ main.c utilities.c pages.c

clean:
	rm -rf $(TARGET)
