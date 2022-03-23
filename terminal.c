#include <stdio.h>
#include <stdlib.h>

void clear()
{
  system("clear");
}

void put_char(char c, int x, int y)
{
  printf("Not yet implemented. Char: %c at (%i, %i).\n", c, x, y);
}

int main()
{
  clear();
  put_char('I', 0, 5);
  put_char('P', 25, 40);
}
