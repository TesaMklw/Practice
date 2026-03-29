#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n, m;

    while(scanf("%lld %lld", &n, &m) == 2) {
        printf("%lld\n", llabs(n - m));    
    }
}