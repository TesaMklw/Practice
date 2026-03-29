#include <stdio.h>
#include <string.h>
char word[100];

int main() {    
    scanf("%s", word);
    int length = strlen(word);
    printf("%d", length);
}