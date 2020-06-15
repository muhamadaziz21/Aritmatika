/**
Nama: Kurnia Ramadhan Putra
Tanggal: 19-02-2020
Nama Program: fungsi_aritmatika.c
*/

#include <stdio.h>

double tambah(double a, double b) {
	return a + b;
}

int main() {
	double x = 10.0, y = 12.0, hasil;
	hasil = tambah(x, y);

	printf("Hasil penjumlahan : %.1f\n", hasil);

	return 0;
}