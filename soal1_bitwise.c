// OPERATOR BITWISE
#include <stdio.h>

int main() {
  printf("=================== OPERATOR BITWISE ===================\n");

  int a, b;

  printf("Masukkan angka a: ");
  scanf("%i", &a);

  printf("Masukkan angka b: ");
  scanf("%i", &b);

  printf("A = %i, B = %i", a, b);
  printf("\n=================== HASIL ===================\n");

  // Bitwise AND
  printf("AND ==> a & b = %d \n", a & b);

  // Bitwise OR
  printf("OR  ==> a | b = %d \n", a | b);

  // Bitwise exclusive OR
  printf("EXCLUSIVE OR ==> a ^ b = %d \n", a ^ b);

  // Bitwise left shift
  printf("LEFT SHIFT ==> a << b = %d \n", a << b);

  // Bitwise right shift
  printf("RIGHT SHIFT ==> a >> b = %d \n", a >> b);

  return 0;
}