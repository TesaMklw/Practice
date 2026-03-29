#include <stdio.h>
#include <string.h>

int main() {
    int a, b;
    char name[50];
    char ans[50];
    int max = 0;

    scanf("%d", &a);
    for(int i = 0; i < a; i++) {
        scanf("%s %d", name, &b);
        
        if(max < b) {
            max = b;
            strcpy(ans, name);
        }
    }

    printf("%s", ans);

}