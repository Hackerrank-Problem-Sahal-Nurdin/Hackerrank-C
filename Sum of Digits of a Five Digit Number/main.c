#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    short int digit = 0;
    scanf("%d", &n);
    while(n>0){
        digit += n % 10;
        n /= 10;
    }
    printf("jadi penjumlahan dari digit angka tersebut adalah %d", digit);
    return 0;
}
