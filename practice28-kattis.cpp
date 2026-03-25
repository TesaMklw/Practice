#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char name[105], city[105];
    char cities[10000][105];
    int count[10000];

    int size = 0;

    for(int i = 0; i < n; i++) {
        scanf("%s", name);
        scanf("%s", city);

        int found = 0;

        for(int j = 0; j < size; j++) {
            if(strcmp(cities[j], city) == 0) {
                count[j]++;
                found = 1;
                break;
            }
        }

        if(!found) {
            strcpy(cities[size], city);
            count[size] = 1;
            size++;
        }
    }

    for(int i = 0; i < size; i++) {
        printf("%s %d\n", cities[i], count[i]);
    }

    return 0;
}