#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <curses.h>

WINDOW *mainwindow;

int main()
{
  // Set up
  if((mainwindow = initscr()) == NULL) // Start curses.
  {
    printf("Error initilizing curses.");
    exit(1);
  }

  // Do stuff
  box(mainwindow, ACS_VLINE, ACS_HLINE);

  // Display
  refresh();

  // Show for a second
  sleep(3);

  // Clean Up
  delwin(mainwindow);
  endwin(); // Stop curses, to restore shell to normal behavior.
  refresh();

  return 0;
}
