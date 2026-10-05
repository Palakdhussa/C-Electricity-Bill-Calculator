#include <stdio.h>

int main() {
    float units, bill;

    printf("===== ELECTRICITY BILL CALCULATOR =====\n");

    printf("Enter electricity units used: ");
    scanf("%f", &units);

    if (units <= 100) {
        bill = units * 5;
    } 
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    } 
    else {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }

    printf("Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}
