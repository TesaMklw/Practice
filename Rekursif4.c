#include <stdio.h>

int gcd(int x, int y) {
    if (y <= x && x % y == 0) {
        return y;
    } else if (x < y) {
        return gcd(y, x);
    } else {
        return gcd(y, x % y);
    }
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int ans = gcd(x, y);
    printf("%d", ans);
}