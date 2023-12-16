#include <stdio.h>
#include <string.h>

//created by 23343081_Qadrian Zakhri

int main() {
    int namaPembeli[100];
    int namaBarang[100];
    float hargaSatuan;
    int jumlah;
    float hargaTotal;

    // Meminta user memasukkan nama pembeli
    printf("Masukkan nama pembeli = ");
    scanf("%s", namaPembeli);

    // Meminta user memasukkan nama barang
    printf("Masukkan nama barang = ");
    scanf("%s", namaBarang);

    // Meminta user memasukkan harga satuan
    printf("Masukkan harga satuan barang = ");
    scanf("%f", &hargaSatuan);

    // Meminta user memasukkan jumlah barang yang dibeli
    printf("Masukkan jumlah barang yang dibeli = ");
    scanf("%d", &jumlah);

    // Menghitung harga total
    hargaTotal = hargaSatuan * jumlah;

    // Menampilkan struk
    printf("\n===== Struk Pembelian =====\n");
    printf("Nama Pembeli = %s\n", namaPembeli);
    printf("Nama Barang = %s\n", namaBarang);
    printf("Harga Satuan = %.2f\n", hargaSatuan);
    printf("Jumlah barang = %d\n", jumlah);
    printf("Harga Total =  %.2f\n", hargaTotal);
    printf("============================\n");

    return 0;
}
