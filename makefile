# ==========================================
# Enhanced Makefile supporting .mnc extensions
# ==========================================

CC = gcc
CFLAGS = -Wall -Wextra -Os -Iinclude
TARGET = build/minusc_fizzbuzz

# src altındaki main.c veya examples altındaki .mnc dosyasını derleyebilir
SRCS = examples/fizzbuzz.mnc
OBJS = build/fizzbuzz.o

all: $(TARGET)

$(TARGET): $(OBJS)
	@mkdir -p build
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# Derleyiciye .mnc uzantılı dosyanın aslında bir C dosyası olduğunu söyleyen kural (-x c)
build/%.o: examples/%.mnc
	@mkdir -p build
	$(CC) $(CFLAGS) -x c -c $< -o $@

clean:
	rm -rf build

.PHONY: all clean
