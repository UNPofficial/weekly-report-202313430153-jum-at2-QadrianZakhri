#include <stdio.h>


void main (){
	
	char nama[] = "_________________";
	int panjang_nama;
	
	// menghitung panjang nama
	panjang_nama = strlen(nama);
	
	printf("Nama\t: %s\n", nama);
	printf("Panjang\t: %d Karakter\n", panjang_nama);
	
}