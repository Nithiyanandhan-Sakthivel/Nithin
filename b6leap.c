#include <stdio.h>
int main() 
{
  int i;
  scanf("%d",&i);
  if((i%4==0&&i%100!=0)||i%400==0)
  {
    printf("%d is leap year",i);
  }
  else
  {
    printf("%d is not leap year",i);
  }
  return 0;
}
