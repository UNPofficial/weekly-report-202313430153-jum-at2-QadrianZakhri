#include <stdio.h>


enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

void main(){
	enum hari sekarang;
	sekarang = RABU ;
	printf("sekarang hari ke-%d", sekarang + 1);
}