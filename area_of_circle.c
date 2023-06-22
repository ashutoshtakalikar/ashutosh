#include <stdio.h>

int main() {

   float pie = 3.14;
   int radius;

   printf("Enter The Radius of Cicle:");
   scanf("%d",&radius);

   printf("\nThe radius of the circle is %d" , radius);

   float area = (float)(pie* radius * radius);

   printf("\nThe area of the given circle is %f", area);

   return 0;
}
