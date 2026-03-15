CC = gcc
CFLAGS = -Iinclude -Wall

all:
	$(CC) $(CFLAGS) src/main.c src/atm_logic.c -o bin/atm

clean:
	del /f bin\atm.exe