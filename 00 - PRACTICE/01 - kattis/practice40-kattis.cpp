#include <stdio.h>

int main() {
    int n, w, ans = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &w);
        ans = ans + w;
    }

    printf("%d", ans);
}