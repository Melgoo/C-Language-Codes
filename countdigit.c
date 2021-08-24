#include<stdio.h>
#include<math.h>
int main(void) {
 int n,sum=0,c=0,div=0,rem=0,x=0;
 printf("enter a no:");
 scanf("%d",&n);
 x=n;
 while(n!=0)
{
  n=n/10;
  c++;
}
printf("%d no of digit  ",c);

}