#include <stdio.h>
int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Eligible to Vote\n");
    else
        printf("Not Eligible to Vote\n");

    return 0;
}
