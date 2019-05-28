#include <stdio.h>
int main() 
{
  int m,h,n;
  scanf("%d",&n);
  h=n/60;
  m=n%60;
  printf("%d\t%d",h,m);
  return 0;
}
