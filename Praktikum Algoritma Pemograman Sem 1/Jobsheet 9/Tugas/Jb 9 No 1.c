#include <stdio.h>

//Created By Qadrian Zakhri_23343081

int main() {
    char *words[] = {"D", "ND", "AND", "LAND", "RLAND", "ORLAND", "BORLAND"};
    char **ptr = words;
    for (int i = 0; i < 7; i++) {
        printf("%s\n", *ptr++);
    }
    return 0;
}