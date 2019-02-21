#include <stdio.h>
int main()
 {
  int n,m,i;
  scanf("%d%d",&n,&m);
  if(m<=10000&&n<=10000){
    for(i=n+1;i<m;i++)
    {
      if(i%2!=0)
      {
        printf("%d\t",i);
      }
    }
  }
  return 0;
}
