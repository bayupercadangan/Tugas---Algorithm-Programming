// OPERATOR PERBANDINGAN

#include <stdio.h>

int myresult(int result) {
  if (result > 0) {
    printf("True \n");
  } else {
    printf("False \n");
  }
}

int main() {
  printf("=================== OPERATOR PERBANDINGAN ===================\n");
  int a, b, c;

  printf("Masukkan angka a: ");
  scanf("%i", &a);

  printf("Masukkan angka b: ");
  scanf("%i", &b);

  printf("a = %i, b = %i \n", a, b);
  printf("=================== HASILNYA ===================\n");
  
  // Operator Lebih Besar
  printf("a > b = ");
  myresult(a > b);

  // Operator Lebih Kecil
  printf("a < b = ");
  myresult(a < b);

  // Operator Lebih Besar Sama Dengan
  printf("a >= b = ");
  myresult(a >= b);

  // Operator Lebih Kecil Sama Dengan
  printf("a <= b = ");
  myresult(a <= b);

  // Operator Sama Kedua Sisi
  printf("a == b = ");
  myresult(a == b);

  // Operator Kebalikan
  printf("a != b = ");
  myresult(a != b);

  return 0;
}