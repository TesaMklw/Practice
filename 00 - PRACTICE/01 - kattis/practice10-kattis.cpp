#include <stdio.h>
#include <string.h>

int main() {
    char text[250];

    scanf("%s", text);

    int length = strlen(text);
    for(int i = 0; i < length; i++) {
        if(text[i] == text[i + 1]) {
            for(int j = i + 1; j < length; j++) {
                text[j] = text[j + 1]; 
            }
            length--;
            i--;
        }
    }

    printf("%s", text);
}