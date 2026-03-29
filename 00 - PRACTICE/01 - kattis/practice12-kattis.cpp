#include <stdio.h>
#include <string.h>

int main() {
    double num;
    char title[30];

    scanf("%s %lf", title, &num);

    double length = strlen(title);

    if(length > num) {
        printf("%.15g", num);
    } else {
        printf("%g", length);
    }
}