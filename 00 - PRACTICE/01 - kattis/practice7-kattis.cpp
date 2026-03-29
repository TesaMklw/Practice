#include <stdio.h>
#include <math.h>

int main() {
    double x1, x2, y1, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    double count = (x2 - x1) * (y2 - y1);

    count = fabs(count);
    printf("%.3lf", count);
}