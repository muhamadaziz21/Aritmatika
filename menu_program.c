/**
Nama: Kurnia Ramadhan Putra
Tanggal: 19-02-2020
Nama Program: menu_program.c
*/
#include <stdio.h>

double tambah(double a, double b) {
 return a + b;
}

double kurang(double a, double b) {
 return a - b;
}
double kali(double a, double b) {
 return a - b;
}
double bagi (double a, double b){
    return a / b;
    }
double mod (double a, double b){
    return a % b;
    }

int main() {
 int pilihan;
 double angka1, angka2;

 printf("Menu Program\n");
 printf("----------------------\n");
 printf("1. pertambahan\n");
 printf("2. pengurangan\n");
 printf("3. perkalian\n");
 printf("4. pembagian\n");
 printf("5. modular\n");

 printf("Masukkan pilihan Anda : ");
 scanf("%d", &pilihan);

 printf("Masukkan Angka I : ");
 scanf("%lf",&angka1);
 printf("Masukkan Angka II : ");
 scanf("%lf",&angka2);

 switch (pilihan)
 {
  case 1:
   printf("Hasil penjumlahan : ");
   printf("%.1f\n", tambah(angka1, angka2));
  break;
  case 2:
   printf("Hasil pengurangan : ");
   printf("%.1f\n", kurang(angka1, angka2));
  break;
  case 3:
   printf("Hasil perkalian : ");
   printf("%.1f\n", kali(angka1, angka2));
  break;
  case 4:
            printf("Hasil pembagian : ");
            printf("%.1f\n", bagi(angka1, angka2));
        break;
        case 5:
            printf("Hasil modular : ");
            printf("%.1f\n", mod(angka1, angka2));
 }
 return 0;
}
