#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    gets(str);  // unsafe, used for simplicity

    while (str[length] != '\0') {
        length++;
    }

    printf("Length = %d\n", length);
    return 0;
}
