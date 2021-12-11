#include <stdio.h>

int main() {
    int a;
    printf("input 16: ");
    scanf("%x", &a);

    int b = a;
    printf("input 10: %d \n", b);

    int c = a >> 2;
    printf("input 16 shift 2: %x \n", c);

    int not_a = ~a;
    printf("input not: %x \n", not_a);

    int b2;
    printf("input 16: ");
    scanf("%x", &b2);

    int bitwise_or = (b2 | b);
    printf("input or: %x", bitwise_or);

    return 0;
}
