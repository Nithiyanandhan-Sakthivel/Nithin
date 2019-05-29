#include <stdio.h>
#include <ctype.h>
int main() {
 char s[100];
 int j=0;
 gets(s);
 for(int i=0;s[i]!=0;i++)
 {
   int c=s[i];
   if(!isalpha(c)&&!isdigit(c))
   {
     j++;
   } 
 }
 printf("%d",j);
 return 0;
}
