#include <stdio.h>

int power(int data, int exp)
{
  int i, result = 1;
  for(i = 0; i < exp; i++)
    result = result * data;
  return result;
}

int main()
{
  printf("%d\n", power(2, 10));
  return 0;
}
