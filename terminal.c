#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

WINDOW *mainwindow;

int main()
{
  mainwindow = initscr(); // Start curses.
  printf("Hello, world!\n");
  endwin(); // Stop curses, to restore shell to normal behavior.
}
