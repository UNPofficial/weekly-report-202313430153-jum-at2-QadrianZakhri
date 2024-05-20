#include <stdio.h>


int main (){
	
	char title[] = "belajar string.h pada bahasa c";
	char title_copy[20];
	
	strcpy(title_copy, title);
	
	printf("isi title_copy\t : %s\n", title_copy);
}