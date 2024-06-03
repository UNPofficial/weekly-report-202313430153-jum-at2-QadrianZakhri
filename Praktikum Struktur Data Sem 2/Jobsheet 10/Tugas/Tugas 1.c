#include <stdio.h>

//Created By 23343081_Qadrian Zakhri

// Fungsi untuk melakukan Shell Sort
void shellSort(int arr[], int n) {
    for (int gap = n/2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

// Fungsi untuk membagi array dan mengembalikan indeks pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

// Fungsi untuk melakukan Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Fungsi untuk mencetak array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int shellSortArray[] = {12, 34, 54, 2, 3};
    int n = sizeof(shellSortArray)/sizeof(shellSortArray[0]);

    printf("Original array for Shell Sort: \n");
    printArray(shellSortArray, n);

    shellSort(shellSortArray, n);

    printf("Sorted array using Shell Sort: \n");
    printArray(shellSortArray, n);

    int quickSortArray[] = {10, 7, 8, 9, 1, 5};
    n = sizeof(quickSortArray)/sizeof(quickSortArray[0]);

    printf("Original array for Quick Sort: \n");
    printArray(quickSortArray, n);

    quickSort(quickSortArray, 0, n - 1);

    printf("Sorted array using Quick Sort: \n");
    printArray(quickSortArray, n);

    return 0;
}
