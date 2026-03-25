#include <stdio.h> 

int main() {
    int m, n;
    while(scanf("%d %d", &m, &n) == 2) {
        if(m < n) {
            printf("%d %d", m, n);
        } else {
            printf("%d %d", n, m);
        }
    }
}