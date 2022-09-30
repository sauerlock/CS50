#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int n;
  do
  {
    n = get_int("Height: ");
  } while (n < 1);
  // printf("%d\n", n);
  for (int i = 0; i < n; i++)
  {
    // printf("n = %d i = %d\n", n, i);
    for (int j = 0; j <= i; j++)
    {
      // printf("n = %d i = %d j = %d\n", n, i, j);
      printf("#");
    }
    printf("\n");
  }

  /*for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("#");
    }
    printf("\n");
  }*/
}
