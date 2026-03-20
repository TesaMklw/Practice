#include <stdio.h>
#include <stdlib.h>

int* gandakanArray(int arr[], int n, int *newSize) {
    *newSize = n * 2;
    int *gandaArr = (int*)calloc(*newSize, sizeof(int)); // otomatis isi 0

    for (int i = 0; i < n; i++)
        gandaArr[i] = arr[i];

    return gandaArr;
}

int main() {
    int n;
    printf("Masukkan jumlah elemen array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Masukkan %d elemen: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int newSize;
    int *gandaArr = gandakanArray(arr, n, &newSize);

    printf("Array baru (%d elemen): ", newSize);
    for (int i = 0; i < newSize; i++)
        printf("%d ", gandaArr[i]);

    free(gandaArr);
}    