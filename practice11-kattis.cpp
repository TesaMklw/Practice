#include <stdio.h>

int main() {
    int a, b[1000000];
    int count = 0;

    scanf("%d", &a);

    for(int i = 0; i < a; i++) {
        scanf("%d", &b[i]);

        if(b[i] < 0) {
            count++;
        }
    }

    printf("%d", count);   
}