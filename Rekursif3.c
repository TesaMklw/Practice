#include <stdio.h>

float pangkat(float x, int n) {
    if(n == 0) {
        return 1.0;
    } else {
        return x * pangkat(x, n - 1);
    }
}

int main() {
    int n;
    float x;
    scanf("%f %d", &x, &n);

    int ans = pangkat(x, n);
    printf("%d", ans);
}