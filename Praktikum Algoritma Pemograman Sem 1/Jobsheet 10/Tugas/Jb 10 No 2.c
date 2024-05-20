#include <stdio.h>

// Struktur untuk menyimpan tanggal lahir
struct TanggalLahir {
    int tanggal;
    int bulan;
    int tahun;
};

// Struktur untuk menyimpan informasi zodiak
struct Zodiak {
    char nama[20];
    struct TanggalLahir rentangMulai;
    struct TanggalLahir rentangAkhir;
};

// Fungsi untuk menentukan zodiak berdasarkan tanggal lahir
void tentukanZodiak(struct TanggalLahir tanggalLahir) {
    // Array dari struktur Zodiak
    struct Zodiak zodiak[] = {
        {"Capricorn", {22, 12, 0}, {19, 1, 0}},
        {"Aquarius", {20, 1, 0}, {18, 2, 0}},
        {"Pisces", {19, 2, 0}, {20, 3, 0}},
        {"Aries", {21, 3, 0}, {19, 4, 0}},
        {"Taurus", {20, 4, 0}, {20, 5, 0}},
        {"Gemini", {21, 5, 0}, {20, 6, 0}},
        {"Cancer", {21, 6, 0}, {22, 7, 0}},
        {"Leo", {23, 7, 0}, {22, 8, 0}},
        {"Virgo", {23, 8, 0}, {22, 9, 0}},
        {"Libra", {23, 9, 0}, {22, 10, 0}},
        {"Scorpio", {23, 10, 0}, {21, 11, 0}},
        {"Sagittarius", {22, 11, 0}, {21, 12, 0}},
        {"Capricorn", {22, 12, 0}, {31, 12, 0}} // Rentang Capricorn untuk akhir tahun
    };

    // Cek setiap zodiak untuk menentukan yang sesuai
    for (int i = 0; i < sizeof(zodiak) / sizeof(zodiak[0]); i++) {
        if ((tanggalLahir.bulan == zodiak[i].rentangMulai.bulan &&
             tanggalLahir.tanggal >= zodiak[i].rentangMulai.tanggal) ||
            (tanggalLahir.bulan == zodiak[i].rentangAkhir.bulan &&
             tanggalLahir.tanggal <= zodiak[i].rentangAkhir.tanggal)) {
            printf("Zodiak Anda adalah: %s\n", zodiak[i].nama);
            return;
        }
    }

    // Pesan untuk rentang tanggal yang tidak valid
    printf("Tanggal lahir tidak valid.\n");
}

int main() {
    struct TanggalLahir tanggalLahir;

    // Input tanggal lahir dari pengguna
    printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &tanggalLahir.tanggal, &tanggalLahir.bulan, &tanggalLahir.tahun);

    // Panggil fungsi untuk menentukan zodiak
    tentukanZodiak(tanggalLahir);

    return 0;
}
