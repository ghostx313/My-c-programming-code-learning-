#include<stdio.h>
int main(void) //simple condutional program i learmt today 
{
  int x = 0;
  printf("Enter a number: ");
  scanf("numb: %d\n", &x);
  if (x == 50)
  {
    printf("weldone,you won!\n");
  }
  else if (x == 10)
  {
    printf("try more time!\n");

  }
  else {
    printf("try again!\n");
  }
  
  return 0;
}

