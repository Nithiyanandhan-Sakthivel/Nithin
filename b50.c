#include <stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  while(a>1)
  {
    if(a%2!=0)
    {
      break;
    }
    a=a/2;
  }
  if(a==1)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  return 0;
}
