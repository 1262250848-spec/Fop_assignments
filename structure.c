#include <stdio.h>
#include <string.h>

int main() {
    struct a {
        int i;
        char ch[2];
    };

    struct a key;

    key.i = 512;
    strcpy(key.ch, "d");

    printf("1.key.i = %d\n", key.i);
    printf("2.key.ch[0]= %s\n", key.ch);
    printf("3.key.ch[1]= %s\n", key.ch);

    key.i = 42;
    printf("4.key.i = %d\n", key.i);
    printf("5.key.ch[0]= %s\n", key.ch);

    return 0;
}