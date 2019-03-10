#include <stdio.h>
#include<math.h>
int main() {
  int i,j,rel,k,ams,rem;
  scanf("%d%d",&i,&j);
  for(k=i+1;k<j;k++)
  {
  rel=k;
  ams=0;
  while(rel!=0)
  {
    rem=rel%10;
    ams=pow(rem,3)+ams;
    rel=rel/10;
  }
  if(k==ams)
  {
    printf("%d\n",k);
  }
  }
  return 0;
}
