#include <stdio.h>

int main()
{
  int x;

  printf( "Enter a stationery: " );
  scanf( "%d", &x );
  printf( "You entered %d", x );
  getchar();
  return 0;
}