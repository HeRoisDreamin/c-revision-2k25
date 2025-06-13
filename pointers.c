#include <stdio.h>

int main() {
    int* cwh, c;

    c = 22;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c); // 22

    cwh = &c;
    printf("Address of pointer cwh: %p\n", cwh);
    printf("Content at pointer cwh: %d\n\n", *cwh); // 11

    c = 11;
    printf("Address of pointer cwh: %p\n", cwh);
    printf("Content of pointer cwh: %d\n\n", *cwh); // 11   

    *cwh = 2;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c); // 2
    return 0;
}
