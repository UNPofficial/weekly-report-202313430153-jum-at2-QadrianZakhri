#include <stdio.h>


void main() {
	
	char ulangi = 'y';
	int counter = 0;
	
	while(ulangi == 'y'){
		
		printf("apakah kamu mau mengulang ?\n");
		printf("jawaban (y/t) : ");
		scanf(" %c", &ulangi);
		
		counter++;
	}
	
	printf("\n\n---------------\n");
	printf("perulangan selesai!\n");
	printf("kamu mengulang sebanyak %i kali.\n", counter);
	
}