#include<stdio.h>

int main(void)
{
  int x = 0;
  int y = 0;
  
  printf("scan: ");
  scanf("%d", &x);
  printf("time: ");
  scanf("%d", &y);

  int distance = x * y;
  printf("dist: %d\n", distance);
  return 0; 
}
