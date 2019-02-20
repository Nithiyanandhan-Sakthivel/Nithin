#include <stdio.h>
int main() {
  int n,rev=0,rem,orginal;
  scanf("%d",&n);
  orginal=n;
 while(n!=0&&n<=1000)
 {
   rem=n%10;
   rev=rev*10+rem;
   n=n/10;
 }
 if(orginal==rev)
 {
   printf("Yes");
 }
 else
 {
   printf("No");
 }
  return 0;
}
