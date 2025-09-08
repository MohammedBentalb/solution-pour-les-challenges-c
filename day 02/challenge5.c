#include<stdio.h>
#define NUM_RATES ((sizeof(value)/sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(){
    int i, low_rate, num_years, month, num_mont, year;
    double value[5];

    printf("Taux d'interet: ");
    scanf("%d", &low_rate);
    printf("Nombre d'annes: ");
    scanf("%d", &num_years);

    printf("\nAnnees");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    // Compute and print interest table
    for (year = 1; year <= num_years; year++) {
        printf("%3d    ", year);
        for (i = 0; i < NUM_RATES; i++) {
            value[i] += (low_rate + i) / 100.0 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    
    }
    return 0;
}