#include <stdio.h>
int main() {
    int number1;

    printf("Enter an Number: ");
    scanf("%d", &number1);

    switch (number % 2) {
        case 0:
            printf("%d: even number.\n", number1);
            break;
        case 1:
        case -1:
            printf("%d: odd number.\n", number1);
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}
