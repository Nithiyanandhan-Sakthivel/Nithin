#include <stdio.h>
#include <math.h>
int main() 
{
  char c;
  scanf("%c",&c);
  if(isdigit(c))
  {
    printf("YES");
  }
  else
  {
    printf("No");
  }
  return 0;
}
