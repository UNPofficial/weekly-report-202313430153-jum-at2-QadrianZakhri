#include <stdio.h>

//create by 23343081_Qadrian Zakhri

int main() {
    float nilaiPresensi = 85;
    float nilaiPraktek = 65;
    float nilaiUTS = 80;
    float nilaiUAS = 75;
    float nilaiAkhir;

    // Menghitung nilai akhir
    nilaiAkhir = (nilaiPresensi * 0.10) + (nilaiPraktek * 0.20) + (nilaiUTS * 0.30) + (nilaiUAS * 0.40);

    printf("Nilai Akhir : %.2f\n", nilaiAkhir);

    return 0;
}
