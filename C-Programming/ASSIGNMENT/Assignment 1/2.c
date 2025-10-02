#include <stdio.h>
int main() {
    int num, rev = 0, temp, digit;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if (num == rev)
        printf("%d is a Palindrome\n", num);
    else
        printf("%d is Not a Palindrome\n", num);

    return 0;
}
