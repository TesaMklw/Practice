#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d, t;

    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    scanf("%d", &t);

    int range;
    if (c - a < 0) {
        range = fabs(c - a);
    } else {
        range = c - a;
    }

    if (d - b < 0) {
        range = range + fabs(d - b);
    } else {
        range = range + (d - b);
    }
    int sisa = t - range;

    if(sisa < 0) {
        printf("N");
    } else if(sisa % 2 == 0) {
        printf("Y");
    } else {
        printf("N");
    }
}