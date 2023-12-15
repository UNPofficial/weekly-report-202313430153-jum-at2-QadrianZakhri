#include <stdio.h>

//Created By Qadrian Zakhri_23343081

int main() {
    int Lesley = 57082;
    int *Layla = &Lesley;
    int Balmond = *Layla + 1;

    // a) Menampilkan nilai Layla
    printf("a) Nilai Layla: %d\n", *Layla);

    // b) Menampilkan nilai Balmond
    printf("b) Nilai Balmond: %d\n", Balmond);

    return 0;
}
