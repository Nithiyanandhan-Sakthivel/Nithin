#include <stdio.h>
int main()
{
  int n,i,t1=0,t2=1,t3;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  printf("%d\t",t1);
  t3=t1+t2;
  t1=t2;
  t2=t3;
  }
  return 0;
}
