#include <stdio.h>
int main()
 {
  int i,n,flag=0;
  scanf("%d",&n);
  if(n!=0&&n<=1000){
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      flag=1;
      break;
    }
  }
  if(flag==0)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  }
  return 0;
}
