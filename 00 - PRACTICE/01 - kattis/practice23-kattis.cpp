#include <stdio.h>

int main() {
    int n, cpu = 0, ram = 0, hdd = 0;
    char a, b, c;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf(" %c %c %c", &a, &b, &c);
        if(a == 'J') {
            cpu++;
        } if(b == 'J') {
            ram++;
        } if(c == 'J') {
            hdd++;
        }
    }

    int min = cpu;
    if(ram < min) min = ram;
    if(hdd < min) min = hdd;
    printf("%d", min);
}