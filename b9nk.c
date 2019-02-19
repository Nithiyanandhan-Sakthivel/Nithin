#include <stdio.h>
int main() 
{
  int m,n,a[1000],i,j,sum=0;
  scanf("%d",&m);
  scanf("%d",&n);
  for(i=0;i<m;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    sum+=a[i];
  }
  printf("%d",sum);
  return 0;
}
