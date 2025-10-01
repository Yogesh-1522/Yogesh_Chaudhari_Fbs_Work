#include <stdio.h>
#include <string.h>
#include<ctype.h>
struct Product {
    int id;
    char name[50];
    float price;
    float discount;
    float finalPrice;
};

int main() {
    int n, i;
    float total = 0, totalWithGST;

    printf("Enter number of products: ");
    scanf("%d", &n);

    struct Product p[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for product %d\n", i + 1);
        printf("Enter product ID: ");
        scanf("%d", &p[i].id);
        printf("Enter product Name: ");
        scanf("%s", p[i].name);
        printf("Enter product Price: ");
        scanf("%f", &p[i].price);

        if (p[i].price > 500)
            p[i].discount = 0.20 * p[i].price;
        else
            p[i].discount = 0.05 * p[i].price;

        p[i].finalPrice = p[i].price - p[i].discount;
        total += p[i].finalPrice;
    }

    totalWithGST = total + (0.18 * total);

    printf("\n----- Product Details -----\n");
    printf("ID\tName\tPrice\tDiscount\tFinal Price\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t%.2f\t\t%.2f\n", 
               p[i].id, p[i].name, p[i].price, p[i].discount, p[i].finalPrice);
    }

    printf("\nTotal Price (before GST): %.2f", total);
    printf("\nTotal Price (after 18%% GST): %.2f\n", totalWithGST);

    return 0;
}