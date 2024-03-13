TARGET := cf-converter

CC := gcc

.PHONY: all clean

all: $(TARGET)

$(TARGET): main.c
	$(CC) -o $@ $^

clean:
	rm -rf $(TARGET)
