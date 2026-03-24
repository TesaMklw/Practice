#include <stdio.h>

int main() {
    int n, t[100], d[100];
    int v[100];

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &t[i], &d[i]);
    }

    for(int i = 0; i < n; i++) {
        v[i] =  (d[i + 1] - d[i]) / (t[i + 1] - t[i]);
    }

    int max = 0;

    for(int i = 0; i < n - 1; i++) {
        if(v[i] > max) {
            max = v[i];
        }
    }

    printf("%d", max);
}