#include <stdio.h>
#include<math.h>
int main() {
  int i,rel,ams=0,rem;
  scanf("%d",&i);
  rel=i;
  while(i!=0&&i<=10000)
  {
    rem=i%10;
    ams=pow(rem,3)+ams;
    i=i/10;
  }
  if(rel==ams)
  {
    printf("Yes");
  }
  else
    printf("No\n");
  return 0;
}
