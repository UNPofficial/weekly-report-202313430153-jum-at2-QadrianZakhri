#include <stdio.h>


void main (){
	
	char nama[] =  "Agariadne D. S.";
	char gelar[] = ", S.kom., M.Pd.T.";
	
	strcat(nama, gelar);
	
	printf("nama lengkap\t : %s\n", nama);
	
}