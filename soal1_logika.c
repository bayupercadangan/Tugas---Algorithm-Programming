// OPERATOR LOGIKA
#include <stdio.h>

int main() {
  printf("=================== OPERATOR LOGIKA ===================\n");

  int a, b, c = 1;

  printf("Masukkan angka a: ");
  scanf("%i", &a);

  printf("Masukkan angka b: ");
  scanf("%i", &b);

  printf("\n=================== HASIL ===================\n");

  // Logical AND
  printf("AND ==> a && b = %d \n", a && b);

  // Logical OR
  printf("OR  ==> a || b = %d \n", a || b);

  // Logical NOT
  printf("NOT ==> Mau nggak jadi pacar aku? %i \n", !c);

  return 0;
}