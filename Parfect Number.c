//Parfect Number
#include <stdio.h>
int main(void) {
 int n,i,sum=0;
 printf("enter a no:");
 scanf("%d",&n);
 for(i=1;i<n;i++)
{
  if(n%i==0)
  {
    sum+=i;
  }
}
if(sum==n)
{
    printf("%d is perfect number\n",n);
}
else
{
    printf("%d is not perfect number\n",n);
}
}