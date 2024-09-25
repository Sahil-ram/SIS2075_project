#include<stdio.h>

void decToBi(int decimal) {
    int binary[32];
    int i = 0;
    if (decimal == 0) {
        printf("0");
    } else {
        while (decimal > 0) {
            binary[i] = decimal % 2;
            decimal /= 2;
            i++;
        }
        for (i = i - 1; i >= 0; i--) {
            printf("%d", binary[i]);
        }
    }
    printf("\n");
}

