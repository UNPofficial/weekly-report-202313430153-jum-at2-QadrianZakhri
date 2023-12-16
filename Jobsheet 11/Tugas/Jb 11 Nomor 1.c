#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("datamahasiswa.txt", "w");

    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return 1;
    }

    int jumlahMahasiswa;
    printf("Masukkan jumlah mahasiswa : ");
    scanf("%d", &jumlahMahasiswa);

    for (int i = 1; i <= jumlahMahasiswa; ++i) {
        fprintf(file, "Data mahasiswa ke-%d\n", i);

        char nama[50], nim[15], jurusan[50], programStudi[50];

        printf("\nNama mahasiswa ke-%d : ", i);
        scanf(" %[^\n]", nama);
        fprintf(file, "Nama : %s\n", nama);

        printf("NIM mahasiswa ke-%d : ", i);
        scanf("%s", nim);
        fprintf(file, "NIM : %s\n", nim);

        printf("Jurusan mahasiswa ke-%d : ", i);
        scanf("%s", jurusan);
        fprintf(file, "Jurusan : %s\n", jurusan);

        printf("Program Studi mahasiswa ke-%d : ", i);
        scanf("%s", programStudi);
        fprintf(file, "Program Studi : %s\n", programStudi);

        fprintf(file, "\n");
    }

    fclose(file);

    printf("Data mahasiswa telah disimpan dalam file datamahasiswa.txt.\n");

    return 0;
}
