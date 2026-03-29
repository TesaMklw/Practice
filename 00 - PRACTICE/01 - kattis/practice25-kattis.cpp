#include <stdio.h>
int m[10000];

int main() {
    int n, min;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &m[i]);
    }

    min = m[0];

    for(int i = 0; i < n; i++) {
        if(m[i] < min) {
            min = m[i];
        }
    }

    printf("%d\n", min);
}