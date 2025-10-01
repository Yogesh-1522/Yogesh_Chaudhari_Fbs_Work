#include <stdio.h>
int main() {
    int minutes = 130;
    int hours = minutes / 60;
    int remaining = minutes % 60;
    printf("%d minutes = %d hours and %d minutes\n", minutes, hours, remaining);
    return 0;
}
