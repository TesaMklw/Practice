#include <stdio.h>

int main() {
    int n, a;
    scanf("%d", &n);
    a = n % 10;
    if(a == 0) {
        printf("Jebb");
    } else {
        printf("Neibb");
    }
}