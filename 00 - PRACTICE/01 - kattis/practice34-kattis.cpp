#include <stdio.h>
char a[1000];

int main() {

    fgets(a, sizeof(a), stdin);

    printf("%s", a);
}