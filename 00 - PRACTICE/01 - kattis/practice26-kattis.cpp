#include <stdio.h>

int main() {
    int n[2];

    for(int i = 0; i < 2; i++) {
        scanf("%d", &n[i]);
    }

    if(n[0] > n[1]) {
        printf("MAGA!");
    } else if(n[1] > n[0]) {
        printf("FAKE NEWS!");
    } else {
        printf("WORLD WAR 3!");
    }
}