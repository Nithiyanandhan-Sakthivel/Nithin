#include <stdio.h>
int main()
{
  int n,i,max;
  scanf("%d",&n);
  max=n;
  for(i=0;i<=8;i++)
  {
    scanf("%d",&n);
    if(max<n)
    {
        max=n;
    }
  }
  printf("%d",max);
  return 0;
}
