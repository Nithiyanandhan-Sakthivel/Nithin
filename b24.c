#include <stdio.h>

int main() {
  int i,j,k,n,a[1000],min,temp;
  scanf("%d",&n);
  for(k=0;k<n;k++)
  {
    scanf("%d",&a[k]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  return 0;
}
