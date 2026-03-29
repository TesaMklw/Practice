#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double a, x[50], y[50], area = 0, k, sx[50], sy[50];
    
    //input jumlah suduh
    scanf("%d", &n);

    //input koordinat tiap sudut
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &x[i], &y[i]);
    }
        
    //input target diperbesar
    scanf("%lf", &a);

    //hitung luas asli
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        area += x[i] * y[j] - x[j] * y[i];
    }
    area = fabs(area) / 2.0;

    //skala
    k = sqrt(a / area);

    //skalakan
    for (int i = 0; i < n; i++) {
        sx[i] = x[i] * k;
        sy[i] = y[i] * k;
    }

    //translasi
    double min_x = sx[0], min_y = sy[0];
    for (int i = 1; i < n; i++) {
        if (sx[i] < min_x) min_x = sx[i];
        if (sy[i] < min_y) min_y = sy[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%.6f %.6f\n", sx[i] - min_x, sy[i] - min_y);
    }

    return 0;
}