#include <stdio.h>
int main() {
    int num;

    printf("Enter an Number: ");
    scanf("%d", &num);

    switch (number % 2) {
        case 0:
            printf("%d is an even number.\n", num);
            break;
        case 1:
        case -1:
            printf("%d is an odd number.\n", num);

            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}
