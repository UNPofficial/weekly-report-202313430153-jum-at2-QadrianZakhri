#include <stdio.h>

//create by 23343081_Qadrian Zakhri

int main() {
    int durasiFilm = 3; // Durasi film dalam jam
    float tarifPertama = 15000.0; // Tarif 1 jam pertama
    float tarifSelanjutnya = 0.5 * tarifPertama; // Tarif jam berikutnya (50% dari tarif pertama)
    float totalBiaya;

    // Memastikan durasi film minimal 1 jam
    durasiFilm = (durasiFilm < 1) ? 1 : durasiFilm;

    totalBiaya = tarifPertama + (durasiFilm - 1) * tarifSelanjutnya;

    printf("Total biaya yang harus dibayar: Rp.%.f\n", totalBiaya);

    return 0;
}
