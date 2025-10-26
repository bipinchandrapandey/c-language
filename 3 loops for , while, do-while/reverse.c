#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    fgets(name, sizeof(name), stdin);
    int len = strlen(name);
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", name[i]);
    }
    return 0;
}
