#include <stdio.h>
#include <string.h>

double convert_to_usd(double kes, double rate) {
    return kes * rate;
}

double convert_to_kes(double usd, double rate) {
    return usd / rate;
}

void run_converter() {
    char currency[10];
    double rate = 0.0078;
    double usd, kes;
    char again;

    printf("Enter currency ($ or KES):\n");
    scanf("%9s", currency);

    if (strcmp(currency, "KES") == 0 || strcmp(currency, "kes") == 0) {
        printf("Enter amount in KES:\n");
        scanf("%lf", &kes);
        usd = convert_to_usd(kes, rate);
        printf("%.2lf KES = %.2lf USD\n", kes, usd);
    } 
    else if (strcmp(currency, "$") == 0) {
        printf("Enter amount in USD:\n");
        scanf("%lf", &usd);
        kes = convert_to_kes(usd, rate);
        printf("%.2lf USD = %.2lf KES\n", usd, kes);
    } 
    else {
        printf("Invalid currency\n");
    }

    printf("Do you want to continue? (y/n): ");
    scanf(" %c", &again);  // space before %c to skip newline

    if (again == 'y' || again == 'Y') {
        run_converter();  // recursive call
    } 
    else {
        printf("Exiting converter.\n");
        return;
    }
}

int main() {
    run_converter();
    return 0;
}
