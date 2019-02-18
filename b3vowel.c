#include <stdio.h>
#include<ctype.h>
int main()
 {
 char i;
 scanf("%c",&i);
 if(isalpha(i)>0)
 {
if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
{
  printf("Vowel");
}
else
{
  printf("Consonant");
}
 }
 else
 {
   printf("invalid");
 }
return 0;
} 
