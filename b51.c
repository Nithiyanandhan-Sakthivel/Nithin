#include <stdio.h>
int main()
{
  int a,d[100],i=0;
  scanf("%d",&a);
  while(a>0)
  {
    int n=a%10;
    d[i++]=n;
    a/=10;
  }
  for(int k=i-1;k>=0;k--)
  {
    printf("%d\t",d[k]);
  }
  return 0;
}
