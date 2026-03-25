#include <stdio.h>

int main() {
    int n;
    char word[30];
    scanf("%s", word);
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Hipp hipp hurra, %s!\n", word);
    }

}