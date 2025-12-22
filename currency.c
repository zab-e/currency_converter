#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char currency[10];
    double rate = 0.0078;
    double kes = 0.0, usd = 0.0;
    
    
    printf("Last updated 22 Dec, 14:20 UTC\n");

    printf("Choose currency ($ or KES):\n");
    scanf("%s", currency);

    if (strcmp(currency, "KES") == 0 || strcmp(currency, "kes") == 0) {
        printf("Enter amount in KES:\n");
        scanf("%lf", &kes);
        usd = kes * rate;
        printf("%.2lf KES = %.2lf USD\n", kes, usd);
    } else if (strcmp(currency, "$") == 0) {
        printf("Enter amount in USD:\n");
        scanf("%lf", &usd);
        kes = usd / rate;
        printf("%.2lf USD = %.2lf KES\n", usd, kes);
    } else {
        printf("Invalid currency\n");
    }


    system("pause");

    return 0;
}
