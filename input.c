#include <stdio.h>

int main() {
  int a;
  char c1;
  float f1;

  printf("\n Enter Value for a: ");
  scanf("%d",&a);

  printf("\n Enter Value for c1: ");
  scanf(" %c",&c1);

  printf("\n Enter Value for f1: ");
  scanf("%f",&f1);

  printf("\n Entered value for a is %d ", a);
  printf("\n Entered value for c1 is %c ", c1);
  printf("\n Entered value for f is %f ", f1);

  return 0;
}

