#include<stdio.h>

int main() {
  printf("(3.14 - 1e20) + 1e20 = %f \n", ((3.14 - 1e20) + 1e20));
  printf("3.14 + (1e20 - 1e20) = %f", (3.14 + (1e20 - 1e20)));
}
