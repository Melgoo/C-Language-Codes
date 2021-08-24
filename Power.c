#include <stdio.h>
#include <math.h>
int power(int x,int e)
{
  int sum=1,i;
  for(i=1;i<=e;i++)
  {
   sum=sum*x;
  }
return sum;
}
int main() {
  int n,e;
    printf("enter the base no----");
    scanf("%d",&n);
printf("enter the exponent no----");
    scanf("%d",&e);

printf("the power of %d is %d",n,power(n,e));
    return 0;
}