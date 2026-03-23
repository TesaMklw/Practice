#include <stdio.h>

int main() {
    int n, p, m;
    scanf("%d", &n);

    scanf("%d", &p);
    if(p <= n && p >= 1) {
        scanf("%d", &m);

        int p1, p2;
        for(int i = 0; i < m; i++) {
            scanf("%d %d", &p1, &p2);
            if(p1 == p) {
                p = p2;
            } else if(p2 == p) {
                p = p1;
            }
        }

    } else {
        printf("Invalid input.");
    }

    printf("%d", p);
}