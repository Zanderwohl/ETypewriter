#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <curses.h>

#define ESC 27

WINDOW *mainwindow;
int keypress;

int main()
{
  // Set up
  if((mainwindow = initscr()) == NULL) // Start curses.
  {
    printf("Error initilizing curses.");
    exit(1);
  }
  noecho();

  // Do stuff
  box(mainwindow, ACS_VLINE, ACS_HLINE);

  // Display
  refresh();

  // Main loop
  while ((keypress = getch()) != ESC)
  {
    //deleteln();
    mvprintw(1, 1, "%x", keypress);
    refresh();
  }

  // Clean Up
  delwin(mainwindow);
  endwin(); // Stop curses, to restore shell to normal behavior.
  refresh();

  return 0;
}
