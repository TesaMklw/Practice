#include <stdio.h>
#include <string.h>
#include <ctype.h>

char text[1000];

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        fgets(text, sizeof(text), stdin);
        int length = strlen(text);

        for (int j = 0; j < length; j++) {
            text[j] = (j == 0) ? toupper(text[j]) : tolower(text[j]);
        }
        printf("%s", text);
    }

    return 0;
}