#include <stdio.h>


void main(){

	int jawaban;
	
	printf("berapakah hasil 3+4\n");
	printf("jawab = ");
	scanf("%d", &jawaban);
	
	printf("jawaban anda : %s\n", (jawaban == 7) ? "benar" : "salah");

}