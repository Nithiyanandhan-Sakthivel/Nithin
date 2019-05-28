#include <stdio.h>
#include <stdlib.h>
int main() 
{
  int h1,m1,h2,m2,h,m;
  scanf("%d%d\n",&h1,&m1);
  scanf("%d%d",&h2,&m2);
  if(h1<=12&&h2<=12&&m1<=60&&m2<=60)
  {
  h=abs(h1-h2);
  m=abs(m1-m2);
  printf("%d\t%d",h,m);
  }
  else
  return 0;
}
