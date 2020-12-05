// SOAL KEHIDUPAN SEHARI-HARI
#include <stdio.h>

int percentage(int percen) {
  return percen / 100;
}

int TotalGaji(int gaji, int tunjangan, int pendidikan, int lembur) {
  int totalGaji;
  totalGaji = gaji + tunjangan + pendidikan + lembur;
  
  return totalGaji;
}

int TotalJabatan(int gaji, int jabatan) {
  int totalJabatan;
  int jab1 = 5, jab2 = 10, jab3 = 15;
  
  switch (jabatan) {
    case 1:
      totalJabatan = (jab1 * gaji) / 100;
      break;
    case 2:
      totalJabatan = (jab2 * gaji) / 100;
      break;
    case 3:
      totalJabatan = (jab3 * gaji) / 100;
      break;
    default:
      totalJabatan = 0;
      break;
  }

  return totalJabatan;
}

float TotalPendidikan(int gaji, int pendidikan) {
  int totalPendidikan;
  float pen1 = 2.5, pen2 = 5.0, pen3 = 10.0;

  switch (pendidikan) {
    case 1:
      totalPendidikan = (pen1 * gaji) / 100;
      break;
    case 2:
      totalPendidikan = (pen2 * gaji) / 100;
      break;
    case 3:
      totalPendidikan = (pen3 * gaji) / 100;
      break;
    default:
      totalPendidikan = 0;
      break;
  }

  return totalPendidikan;
}

int TotalLembur(int gaji, int jamLembur) {
  int totalLembur, lembur = 3000;

  totalLembur = jamLembur * lembur;

  return totalLembur;
}

// MAIN FUNCTION
int main() {
  // Diketahui;
  int gajipokok = 2000000;

  // Form
  char namaKaryawan[20];
  int jabatan, pendidikan, jamKerja;
  int totalJabatan, totalPendidikan, totalLembur;

  printf("========================= PROGRAM HITUNG GAJI KARYAWAN PT.ABC =========================\n");

  printf("Masukkan Nama Karyawan: ");
  scanf("%[^\n]%*c", namaKaryawan);

  printf("Masukkan Golongan Jabatan (1 / 2 / 3): ");
  scanf("%i", &jabatan);

  printf("Masukkan Pendidikan Terakhir (1 = SMA, 2 = D3, 3 = S1): ") ;
  scanf("%i", &pendidikan);

  printf("Masukkan Jam Kerja: ");
  scanf("%i", &jamKerja);

  // Calculate
  totalJabatan = TotalJabatan(gajipokok, jabatan);
  totalPendidikan = TotalPendidikan(gajipokok, pendidikan);
  totalLembur = TotalLembur(gajipokok, jamKerja);

  printf("\n======================= HASIL =======================\n");
  printf("|| Nama Karyawan : %s \n", namaKaryawan);
  printf("|| Tunjangan Jabatan Rp %i \n", totalJabatan);
  printf("|| Tunjangan Pendidikan Rp %i \n", totalPendidikan);
  printf("|| Honor Lembur Rp %i \n", totalLembur);
  printf("-------------------------------------------------- +\n");
  printf("Total Gaji Rp %i \n", TotalGaji(gajipokok, totalJabatan, totalPendidikan, totalLembur));
  printf("=====================================================\n");

  return 0;
}
