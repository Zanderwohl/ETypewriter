CC=gcc

terminal.o: terminal.c
	@echo "Terminal"
	$(CC) terminal.c -o terminal.o -lcurses
