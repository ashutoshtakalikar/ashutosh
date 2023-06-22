#include<stdio.h>

void myFunction(char name[]) {
  printf("\nHello %s", name);
}

int main() {
  myFunction("ashu");
  myFunction("aditya");
  myFunction("manik");
  return 0;
}
