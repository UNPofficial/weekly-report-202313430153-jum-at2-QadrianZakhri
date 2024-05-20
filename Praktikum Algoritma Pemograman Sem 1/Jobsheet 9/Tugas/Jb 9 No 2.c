#include <stdio.h>
#include <string.h>

//Created By Qadrian Zakhri_23343081

int main() {
    char kalimat[100];
    
    printf("Masukkan kalimat: ");
    gets(kalimat);  // Menggunakan gets() untuk membaca keseluruhan baris kalimat

    int panjang = strlen(kalimat);
    
    printf("Kebalikannya: ");
    for (int i = panjang - 1; i >= 0; i--) {
        printf("%c", kalimat[i]);
    }
    
    printf("\n");
    
    return 0;
}
