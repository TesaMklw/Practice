#include <stdio.h>
#include <string.h>
char word[10005];

int main() {
    int n;
    char let;

    scanf("%d", &n);
    scanf(" %c", &let);

    scanf("%s", word);

    int len = strlen(word);

    for(int i = 0; i < len; i++) {
        if(word[i] == let) {
            printf("Unnar fann hana!");
            return 0;
        }
    }

    printf("Unnar fann hana ekki!");
    return 0;
}