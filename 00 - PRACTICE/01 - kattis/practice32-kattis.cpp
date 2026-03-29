#include <stdio.h>

int main() {
    int v, a, t;
    scanf("%d %d %d", &v, &a, &t);
    double ans = v * t + 0.5 * a * (t * t);
    printf("%.9lf", ans);
}