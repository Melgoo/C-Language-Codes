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
n=x;
while(n!=0)
{
  rem=n%10;
  sum=sum+pow(rem,c);
    n=n/10;
}
printf("%d\n",c);
printf("%d\n",sum);
if(x==sum)
{
  printf("%d No is Amstrong",x);
}
else{
  printf("%d No is not Amstrong",x);
}

}