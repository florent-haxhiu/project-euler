#include <stdio.h>

#define MAX 1000

int main()
{
  int sum = 0;
  int arr[MAX] = {};

  for (int i = 0; i < MAX; i++)
  {
    if ((i % 5) == 0 || (i % 3) == 0)
    {
      arr[i] = i;
    }
  }

  for (int i = 0; i < MAX; i++)
  {
    sum = sum + arr[i];
  }

  printf("%d\n", sum);
  return 0;
}
