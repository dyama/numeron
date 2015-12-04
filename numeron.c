#include <stdio.h>
#include <stdlib.h> // rand
#include <time.h>

int main()
{
  char x, y, z;
  int a, b, c;
  int n, m;

  srand((unsigned int)time(NULL));
  x = (char)(rand()%10);
  do {
    y = (char)(rand()%10);
  } while(y == x);
  do {
    z = (char)(rand()%10);
  } while(z == x||z == y);

  for (;;) {

    scanf("%3d", &n);

    a = n/100;
    b = n%100/10;
    c = n%10;

    if (n < 12||n > 987||a == b||a == c||b == c)
      continue;

    n = 0;
    if (a == x) n++;
    if (b == y) n++;
    if (c == z) n++;

    m = 0;
    if (a == y || a == z) m++;
    if (b == x || b == y) m++;
    if (c == x || c == y) m++;

    if (n != 3)
      printf("%d-%d\n", n, m);
    else {
      puts("Hit!\n");
      break;
    }
  }
  return 0;
}

