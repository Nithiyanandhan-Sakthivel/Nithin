#include <stdio.h>
#include <ctype.h>
int main() {
 char s[100];
 int j=1;
 gets(s);
 for(int i=0;s[i]!=0;i++)
 {
   if(s[i]=='.')
   {
     j++;
   } 
 }
 printf("%d",j);
 return 0;
}
