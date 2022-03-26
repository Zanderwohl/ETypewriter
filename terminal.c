#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <curses.h>

#define ESC 27

// Main window
WINDOW *mainwindow;

// The keypress this loop.
int keypress;

int max_x, max_y;

int main()
{
  // Set up
  if((mainwindow = initscr()) == NULL) // Start curses.
  {
    printf("Error initilizing curses.");
    exit(1);
  }
  noecho(); // Turn off character echo
  keypad(mainwindow, 1);
  wmove(mainwindow, 1, 1);
  getmaxyx(mainwindow, max_y, max_x);

  // Do stuff
  box(mainwindow, ACS_VLINE, ACS_HLINE);

  // Display
  refresh();

  // Main loop
  while ((keypress = getch()) != ESC)
  {
    mvprintw(1, 1, "%i", keypress);
    refresh();
  }

  // Clean Up
  delwin(mainwindow);
  endwin(); // Stop curses, to restore shell to normal behavior.
  refresh();

  return 0;
}
