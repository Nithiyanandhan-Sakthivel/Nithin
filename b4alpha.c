#include <stdio.h>
#include<ctype.h>
int main()
 {
 char i;
 scanf("%c",&i);
 if(isalpha(i)>0)
 {
  printf("Alphabet");
 }
 else
 {
   printf("No");
 }
return 0;
} 
