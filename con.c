#include<stdio.h>
int main(void) //simple condutional program i learmt today 
{
  int x = 50;
  printf("Enter a number: ");
  scanf("numb: %d\n", &x);
  if (x == 50)
  {
    printf("weldone,you won!\n");
  }
  else {
    printf("try again!\n");
  }
  
  return 0;
}

