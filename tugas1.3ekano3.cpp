#include <stdio.h>

int main() {
	int N;
	
	printf("Masukan nilai N: ");
	scanf("%d", &N);
	
	if (N > 50) {
		N = N - 25;
		N = N + 10;
	} else {
		N = N - 25;
	}
	
	printf("Hasil: %d\n", N);
	
	return 0;
}
