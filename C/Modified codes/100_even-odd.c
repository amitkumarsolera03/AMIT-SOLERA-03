// Printing 1 to 100, first 100 even numbers and first 100 odd number.

#include <stdio.h>

int main()
{
  int i = 0;
  printf("These are even numbers between 1 to 100:- \n");
  while (i <= 100){
    if (i % 2 == 0)
      printf("%d,", i);
    i++;
    }
  printf("\n\nThese are even numbers between 1 to 100:- \n");
  i=0;
  while (i <= 100){
    if (i % 2 != 0)
      printf("%d,", i);
    i++;
  }

  return 0;
}
