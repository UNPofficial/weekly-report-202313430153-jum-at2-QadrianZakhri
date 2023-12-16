#include <stdio.h>

//create by 23343081_Qadrian Zakhri

int main() {
    int n = 5; // Jumlah baris yang ingin dicetak
    int i, j;

    for (i = 1; i <= n; ++i) {
        int num = i;
        for (j = 1; j <= i; ++j) {
            printf("%d ", num);
            num += i;
        }
        printf("\n");
    }
	
    return 0;
}
