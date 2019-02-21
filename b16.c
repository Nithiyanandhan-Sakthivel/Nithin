#include <stdio.h>
int main()
 {
  int i,n,flag,m,k;
  scanf("%d%d",&n,&m);
 for(k=n+1;k<m;k++){
  for(i=2;i<=k/2;i++)
  {
    flag=0;
    if(k%i==0)
    {
      flag=1;
      break;
    }
  }
    if(flag==0)
  {
    printf("%d\n",k);
  }

  }
  return 0;
}
