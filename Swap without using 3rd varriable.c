#include <stdio.h>
int main(void) {
  int x,y,z;
  printf("Enter the x no:");
  scanf("%d",&x);
    printf("Enter the y no:");
  scanf("%d",&y);
z=x+y;
x=z-x;
y=z-y;
  printf("Two swaping no x=%d \t Y=%d",x,y);
  return 0;
}