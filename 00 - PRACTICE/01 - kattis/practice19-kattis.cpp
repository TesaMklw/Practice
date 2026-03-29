#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    char word[100];
    int min = 1, max = 1000;

    while(1) {
        int mid = (min + max) / 2;
        printf("%d\n", mid);
        fflush(stdout);

        scanf("%s", word);

        if(strcmp(word, "correct") == 0) {
            break;
        } else if(strcmp(word, "lower") == 0) {
            max = mid - 1;
        } else {
            min = mid + 1;
        }
    }
}