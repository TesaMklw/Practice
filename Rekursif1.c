#include <stdio.h>

int kali(int a, int b) {
    if(b == 1) {
    } else {
        return a + kali(a, b - 1);
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int ans = kali(a, b);
    printf("%d", ans);
}