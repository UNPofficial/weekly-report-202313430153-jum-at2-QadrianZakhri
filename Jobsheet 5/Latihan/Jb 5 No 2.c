#include <stdio.h>


void main(){

	char password[30];

	printf("=== program login ===\n");
	printf("masukkan password : ");
	scanf("%s", &password);
	
	if( strcmp(password, "kopi") == 0){
		printf("selamat datang boss!\n");
	} else {
		printf("passowrd salah, coba lagi \n");
		
	}
	
	printf("terima kasih sudah menggunakan aplikasi ini!\n");
}