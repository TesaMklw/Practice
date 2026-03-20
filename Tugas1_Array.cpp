#include <stdio.h>

void bagiDua(int arr[], int n, int arr1[], int *n1, int arr2[], int *n2) {
    *n1 = n / 2;
    *n2 = n - *n1;

    for (int i = 0; i < *n1; i++)
        arr1[i] = arr[i];

    for (int i = 0; i < *n2; i++)
        arr2[i] = arr[*n1 + i];
}

int main() {
    int n;
    printf("Masukkan jumlah elemen array: ");
    scanf("%d", &n);

    int arr[n], arr1[n], arr2[n];
    printf("Masukkan %d elemen: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int n1, n2;
    bagiDua(arr, n, arr1, &n1, arr2, &n2);

    printf("Array 1: ");
    for (int i = 0; i < n1; i++) printf("%d ", arr1[i]);

    printf("\nArray 2: ");
    for (int i = 0; i < n2; i++) printf("%d ", arr2[i]);

    return 0;
}