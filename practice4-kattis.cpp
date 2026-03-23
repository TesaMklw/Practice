#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char alf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char l[1000000];
    int lengkap = 0;
    
    scanf("%s", l);
    int length1 = strlen(l);
    int length2 = strlen(alf);

    for(int i = 0; i < length1; i++) {
        l[i] = toupper(l[i]);
    }
    
    for(int i = 0; i < length2; i++) {
        if(strchr(l, alf[i]) == NULL) {
            printf("%c", alf[i]);
        } else {
            lengkap += 1;
        }
    }

    if(lengkap == 26) {
        printf("Alphabet Soup!");
    }

}