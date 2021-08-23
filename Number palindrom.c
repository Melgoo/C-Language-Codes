//Number palindrom
#include <stdio.h>
int main(void) {
 int n,palin,rev=0,rem=0,div=0;
 printf("Enter a no:");
 scanf("%d",&n);
 palin=n;
 while(n>0)
 {
rem=n%10;
rev=(rev*10)+rem;
div=n/10;
n=div;
 }
 printf("%d\n",rev);
 if(palin==rev)
 {
   printf("palindrom");
 }
 else{
   printf("not palindrom");
 }
}