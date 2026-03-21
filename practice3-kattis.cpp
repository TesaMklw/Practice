#include <stdio.h>
#include <assert.h>

int main() {
    int f;
    scanf("%d", &f);
    assert(f <= 1000000);
    if(f >= 13) {
        f = f + 1;
    } else {
        f = f;
    }
    printf("%d", f);
}