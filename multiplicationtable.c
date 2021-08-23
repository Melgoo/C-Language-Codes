//multiplication table
#include <stdio.h>
int main(){
  int i,a,mul;
printf("enter the element=");
scanf("%d",&a);
for(i=1;i<=10;i++)
{
mul=a*i;
  printf("%d * %d = %d\n",a,i,mul);

}
  return 0;
}
  