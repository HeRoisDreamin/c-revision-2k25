#include <conio.h>

int main() {
    char ch;
    printf("Press any key: ");
    ch = getch();  // reads single key without waiting for Enter
    printf("\nYou pressed: %c\n", ch);
    return 0;
}