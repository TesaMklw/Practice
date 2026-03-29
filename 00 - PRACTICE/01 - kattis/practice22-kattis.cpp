#include <stdio.h>
#include <ctype.h>

int main() {
    char letters;
    scanf(" %c", &letters);
    letters = toupper(letters);

    if(letters == 'A' || letters == 'I' || letters == 'U' || letters == 'E' || letters == 'O') {
        printf("Jebb");
    } else if(letters == 'Y') {
        printf("Kannski");
    } else {
        printf("Neibb");
    }
}