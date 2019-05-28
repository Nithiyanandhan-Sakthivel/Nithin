#include <stdio.h>
int main()
{
 int a,b,c,sum;
 scanf("%d%d%d",&a,&b,&c);
 sum=(a*(2*b+(a-1)*c))/2;
 printf("%d ",sum);
 return 0;
}
