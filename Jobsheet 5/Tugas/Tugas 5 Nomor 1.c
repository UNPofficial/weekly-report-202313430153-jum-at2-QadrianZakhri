#include <stdio.h>

//create by 23343081_Qadrian Zakhri

int main() {
	
	//deklarasi
    char choice;
    double num1, num2, result;

	//user memilih kalkulator yang diinginkan
    printf("Program Kalkulator Sederhana\n");
    printf("Pilihan Operasi:\n");
    printf("a) Penjumlahan\n");
    printf("b) Pengurangan\n");
    printf("c) Perkalian\n");
    printf("d) Pembagian\n");
    printf("e) Hasil Bagi\n");
    printf("Pilih operasi (a/b/c/d/e): ");
    scanf(" %c", &choice);

	//user memasukkan bilangan yang ingin dijumlahkan
    printf("Masukkan dua bilangan: ");
    scanf("%lf %lf", &num1, &num2);

    switch (choice) {
        case 'a':
            result = num1 + num2;
            printf("Hasil Penjumlahan: %.2lf\n", result);
            break;
        case 'b':
            result = num1 - num2;
            printf("Hasil Pengurangan: %.2lf\n", result);
            break;
        case 'c':
            result = num1 * num2;
            printf("Hasil Perkalian: %.2lf\n", result);
            break;
        case 'd':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Hasil Pembagian: %.2lf\n", result);
            } else {
                printf("Pembagian oleh nol tidak diizinkan\n");
            }
            break;
        case 'e':
            if (num2 != 0) {
                int hasilBagi = (int)num1 / (int)num2;
                printf("Hasil Bagi (hanya bilangan bulat): %d\n", hasilBagi);
            } else {
                printf("Pembagian oleh nol tidak diizinkan\n");
            }
            break;
        default:
            printf("Pilihan tidak valid\n");
            break;
    }

    return 0;
}
