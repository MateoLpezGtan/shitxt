.POSIX:

CC = clang
CFLAGS = -std=c23 -Wall -Wextra -Wpedantic

BUILD_DIR=build

CFILES = src/shitxt.c
BINARY=$(BUILD_DIR)/bin/shitxt

all: $(BINARY)

$(BINARY): $(CFILES)
	$(CC) $(CFLAGS) $^ -o $@
