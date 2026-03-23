#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[80];
    char vowels[] = "AIUEO";
    int count = 0;

    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';
    
    int length = strlen(text);

    for(int i = 0; i < length; i++) {
        text[i] = toupper(text[i]);
    }
    
    for(int i = 0; i < length; i++) {
        if(strchr(vowels, text[i]) != NULL) {
            count++;
        }
    }

    printf("%d", count);

}