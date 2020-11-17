// OPERATOR KONDISI
#include <stdio.h>

int myresult(int result) {
  return result;
}

int main() {
  printf("=================== OPERATOR KONDISI ===================\n");

  int a, b;

  printf("Masukkan nilai a: ");
  scanf("%i", &a);

  printf("Masukkan nilai b: ");
  scanf("%i", &b);

  printf("A = %i, B = %i", a, b);
  printf("\n=================== HASIL ===================\n");

  // Ternary Operator
  printf(
    "%s \n",
    a > b
      ? "Selamat anda lolos"
      : "Maaf anda tidak lolos"
  );

  return 0;
}