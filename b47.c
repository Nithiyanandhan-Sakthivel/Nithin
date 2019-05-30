#include <stdio.h>
int main()
{
  int n,a[1000],i,min,max;
  scanf("%d",&n);
  scanf("%d",&a[0]);
  min=max=a[0];
  for(i=1;i<n;i++)
  {
      scanf("%d",&a[i]);
      if(max<a[i])
      {
        max=a[i];
      }
      if(min>a[i])
      {
        min=a[i];
      }
  }
  printf("%d\t%d",min,max);
  return 0;
}
