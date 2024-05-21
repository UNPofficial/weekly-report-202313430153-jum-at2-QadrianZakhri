#include <stdio.h>
#include <string.h> //Penambahan #include <string.h> untuk menggunakan fungsi strcpy.

// Created By 23343081_Qadrian Zakhri

// Deklarasi struktur Mahasiswa
struct Mahasiswa {
    char nama[50];
    char jurusan[50];
    int nilai;
};

// Mendefinisikan tipe data baru menggunakan typedef
typedef struct Mahasiswa data;

int main(void) {
    // Mendeklarasikan variabel mhs01 dengan tipe data data
    data mhs01;

    // Menginisialisasi nilai untuk mhs01
    strcpy(mhs01.nama, "Qadrian Zakhri");
    strcpy(mhs01.jurusan, "Informatika");
    mhs01.nilai = 100;

    // Mencetak informasi mahasiswa
    printf("%s adalah mahasiswa jurusan %s\n", mhs01.nama, mhs01.jurusan);
    printf("memperoleh nilai UAS %i\n", mhs01.nilai);

    return 0;
}
