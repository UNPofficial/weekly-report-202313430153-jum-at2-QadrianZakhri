#include <stdio.h>

int main() {
    
	char name[20], web_address[30];
	
	printf("nama : ");
	scanf("%[^\n]s", &name);
	
	printf("Alamat web : ");
	scanf("%s", &web_address);
	
	printf("\n---------------------\n");
	printf("Nama yang diinputkkan : %s\n", name);
	printf("alamat web yang diinputkan : %s\n", web_address);
	
	return 0;
    
}
