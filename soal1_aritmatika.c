// OPERATOR ARITMATIKA

#include <stdio.h>

int main() {
  printf("=================== OPERATOR ARITMATIKA ===================\n");
  int a, b, result;
  
  printf("Masukkan angka pertama: ");
  scanf("%d", &a);

  printf("Masukkan angka kedua: ");
  scanf("%d", &b);

  printf("\n================== HASILNYA ================== \n");

  // Operator Penjumlahan
  result = a + b;
  printf("%d + %d = %d \n", a, b, result);

  // Operator Pengurangan
  result = a - b;
  printf("%d - %d = %d \n", a, b, result);

  // Operator Perkalian
  result = a * b;
  printf("%d * %d = %d \n", a, b, result);

  // Operator Pembagian
  result = a / b;
  printf("%d / %d = %.2f \n", a, b, result);

  // Operator Dividen
  result = a % b;
  printf("%d div %d = %d \n", a, b, result);

  return 0;
}