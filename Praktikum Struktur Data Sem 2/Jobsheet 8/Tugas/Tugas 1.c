#include <stdio.h>

//Created By 23343081_Qadrian Zakhri

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int bubbleSortArray[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(bubbleSortArray)/sizeof(bubbleSortArray[0]);

    printf("Original array for Bubble Sort: \n");
    printArray(bubbleSortArray, n);

    bubbleSort(bubbleSortArray, n);

    printf("Sorted array using Bubble Sort: \n");
    printArray(bubbleSortArray, n);

    int insertionSortArray[] = {64, 34, 25, 12, 22, 11, 90};
    n = sizeof(insertionSortArray)/sizeof(insertionSortArray[0]);

    printf("Original array for Insertion Sort: \n");
    printArray(insertionSortArray, n);

    insertionSort(insertionSortArray, n);

    printf("Sorted array using Insertion Sort: \n");
    printArray(insertionSortArray, n);

    return 0;
}
