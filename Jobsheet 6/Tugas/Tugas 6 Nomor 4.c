#include <stdio.h>

//create by 23343081_Qadrian Zakhri

int main() {
    int saldo = 175000; // Saldo awal Hattori
    int pilihan;
    
    printf("No Rek : 98635628296\n");
    printf("Nama Akun : Hattori\n");
    printf("Saldo ATM : Rp.%d\n", saldo);

    while (1) {
        printf("\n===== ATM =====\n");
        printf("1) Cek Saldo\n");
        printf("2) Setor Tunai\n");
        printf("3) Tarik Tunai\n");
        printf("4) Exit\n");
        printf("Pilih menu : ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Saldo Rekening Anda\nRp.%d\n", saldo);
                break;
            case 2:
                {
                    int setoran;
                    printf("Masukkan jumlah setor : Rp.");
                    scanf("%d", &setoran);
                    saldo += setoran;
                    printf("Setoran berhasil. Saldo Anda saat ini : Rp.%d\n", saldo);
                }
                break;
            case 3:
                {
                    int penarikan;
                    printf("Masukkan jumlah penarikan : Rp. ");
                    scanf("%d", &penarikan);
                    if (saldo - penarikan >= 50000) {
                        saldo -= penarikan;
                        printf("Penarikan berhasil. Saldo Anda saat ini : Rp.%d\n", saldo);
                    } else {
                        printf("Saldo tidak mencukupi untuk penarikan tersebut.\n");
                    }
                }
                break;
            case 4:
                printf("Terima kasih! Sampai jumpa.");
                return 0;
            default:
                printf("Pilihan tidak valid. Silakan pilih menu.\n");
        }
    }

    return 0;
}
