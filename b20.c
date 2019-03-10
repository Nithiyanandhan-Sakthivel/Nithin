#include <stdio.h>
int main() {
  int n,i,mul=1;
  scanf("%d",&n);
  for(i=1;i<=5;i++)
  {
    mul=i*n;
    printf("%d\n",mul);
  }
  return 0;
}
