#include <stdio.h>

int main ()
{
  int x, y;
  printf ("Enter x,y with the format giving , :");
  scanf ("%d,%d", &x, &y);
  printf ("before swap x=%d,y=%d", x, y);
  x = x + y;			//x=4+5=9
  y = x - y;			//y=9-5=4
  x = x - y;			//x=9-4=5
  printf ("\nAfter swap x=%d,y=%d", x, y);


  return 0;
}
