//Created by 23343081_Qadrian Zakhri
#include <stdio.h>
int main(){
	char name[50];
	//Program menampilkan :
	printf("Hello, siapa nama lengkapmu?\n");
	
	//Menampilkan "Selamat datang (nama)".
	scanf("%[^\n]s", &name);
	printf("Selamat datang %s dalam Pemrograman C!\n", name);

	
	return 0;

}
