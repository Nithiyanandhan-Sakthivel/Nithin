#include <stdio.h>

int main() {
  int i,j,k,n,a[1000],min;
  scanf("%d",&n);
  for(k=0;k<n;k++)
  {
    scanf("%d",&a[k]);
  }
  if(n>=1&&n<=100000)
  {
  min=a[0];
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(min>a[j])
      {
        min=a[j];
      }
    }
  }
  }
  printf("%d\n",min);
  return 0;
}
