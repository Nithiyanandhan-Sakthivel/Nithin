#include <stdio.h>

int main() {
  int i,j,k,n,a[1000],max;
  scanf("%d",&n);
  for(k=0;k<n;k++)
  {
    scanf("%d",&a[k]);
  }
  if(n>=1&&n<=100000)
  {
  max=a[0];
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(max<a[j])
      {
        max=a[j];
      }
    }
  }
  }
  printf("%d\n",max);
  return 0;
}
