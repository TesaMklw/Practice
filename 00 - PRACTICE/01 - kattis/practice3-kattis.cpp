#include <stdio.h>

int main() {
    int f;
    if (scanf("%d", &f) != 1) {
        return 0;
    }

    if (f >= 13) {
        f = f + 1;
    }

    printf("%d\n", f);
    return 0;
}