#include <stdio.h>

//created by 23343081_Qadrian Zakhri

int main() {
    int totalDetik, jam, menit, sisaDetik;

    printf("Masukkan jumlah waktu dalam detik : ");
    scanf("%d", &totalDetik);

    jam = totalDetik / 3600;           // Menghitung jam
    sisaDetik = totalDetik % 3600;     // Menghitung sisa detik setelah jam diambil

    menit = sisaDetik / 60;            // Menghitung menit
    sisaDetik %= 60;                   // Menghitung sisa detik setelah menit diambil

    printf("%d Detik Sama Dengan %d Jam %d Menit %d Detik\n", totalDetik, jam, menit, sisaDetik);

    return 0;
}
