#include <stdio.h>

int pangkat(int a) {
    if(a == 1) {
        return 1;
    } else {
        return a + pangkat(a - 1);
    }
}

int main() {
    int a;
    scanf("%d", &a);

    int ans = pangkat(a);
    printf("%d", ans);
}