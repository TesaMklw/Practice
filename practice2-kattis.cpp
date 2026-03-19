#include <stdio.h>
#include <string.h>

int main() {
    char n[20];
    scanf("%s", n);
    
    if (strncmp(n, "555", 3) == 0) {
        printf("1");
    } else {
        printf("0");
    }
    
    return 0;
}