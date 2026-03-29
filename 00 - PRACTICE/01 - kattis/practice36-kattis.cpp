#include <stdio.h>

int main() {
    int n;
    long long x, max, min;

    scanf("%d", &n);

    scanf("%lld", &x);
    max = min = x;

    for(int i = 1; i < n; i++) {
        scanf("%lld", &x);

        if(x > max) {
            max = x;
        }
        if(x < min) {
            min = x;
        }
    }

    printf("%lld %lld", max, min);
}