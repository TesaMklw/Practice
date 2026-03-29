#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char word[n][100];
    for(int i = 0; i < n; i++) {
        scanf("%s", word[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("Takk %s\n", word[i]);
    }
}