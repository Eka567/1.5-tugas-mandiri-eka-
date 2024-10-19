#include <stdio.h>

int main() {
	int bilangan;
	
	// Menampilkan input dari pengguna
	printf("Masukkan bilangan bulat positif: ");
	scanf("%d", &bilangan);
	
	// Mengecek apakah bilangan ganjil atau genap
	if (bilangan %2 == 0) {
		printf("Bilangan tersebut adalah GENAP/n");
	} else {
		printf("Bilangan tersebut adalah GANJIL/n");
	}
	
	return 0;
}
