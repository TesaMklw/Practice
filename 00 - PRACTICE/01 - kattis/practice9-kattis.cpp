#include <stdio.h>
#include <string.h>

int main() {
    int n, num[1000];
    char word[1000][5];
    int max;
    char no[] = "nej";

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d %s", &num[i], word[i]);
    }

    max = 0;
    for(int i = 0; i < n; i++) {
        if(num[i] > max && strcmp(word[i], no) == 0) {
            max = num[i];
        }
    }

    printf("%d", max);
}