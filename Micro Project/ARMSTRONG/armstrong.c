#include "A_header.h"

void main() {
    int num, original_num, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    original_num = num;

    while (original_num != 0) {
       // remainder contains the last digit
        remainder = original_num % 10;

       result += remainder * remainder * remainder;

       // removing last digit from the orignal number
       original_num /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
}
