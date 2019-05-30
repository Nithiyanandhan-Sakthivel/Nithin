#include <stdio.h>
#include<string.h>
int main()
{
  char s[100],g[100];
  int i,j;
  gets(s);
  gets(g);
  for(i=0;s[i]!=0;i++);
  {
    for(j=0;g[j]!=0;j++)
    {
      s[i++]=g[j];
    }
  }
  s[i]=0;
    puts(s);
  return 0;
}
