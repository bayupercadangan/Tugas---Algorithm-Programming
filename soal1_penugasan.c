// OPERATOR PENUGASAN
#include <stdio.h>

int myresult(int result) {
  return result;
}

int main() {
  printf("=================== OPERATOR PENUGASAN ===================\n");

  int a, b, c;

  printf("Masukkan angka a: ");
  scanf("%i", &a);

  printf("Masukkan angka b: ");
  scanf("%i", &b);

  printf("A = %i, B = %i", a, b);
  printf("\n=================== HASIL ===================\n");

  // Penugasan =
  c = myresult(a = b);
  printf("A = B is %d \n", c);

  // Penugasan +=
  c = myresult(a += b);
  printf("A += B is %d \n", c);

  // Penugasan -=
  c = myresult(a -= b);
  printf("A -= B is %d \n", c);

  // Penugasan *=
  c = myresult(a *= b);
  printf("A *= B is %d \n", c);

  // Penugasan /=
  c = myresult(a /= b);
  printf("A /= B is %d \n", c);

  // Penugasan %=
  c = myresult(a %= b);
  printf("A %= B is %d \n", c);

  return 0;
}