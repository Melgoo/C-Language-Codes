//reverse string
#include <stdio.h>
int main(void) {
 int i,len=0,flag=0;
 char string[100],rev_string[100]={'\0'};
 printf("Enter a no:");
 scanf("%s",string);
 for(i=0;string[i]!='\0';i++)
 {
len++;
 }
  for(i=len-1;i>=0;i--)
  {
rev_string[len-i-1]=string[i];
  }
  printf("%s",rev_string);
}