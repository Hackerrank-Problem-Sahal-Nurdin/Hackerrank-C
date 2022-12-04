#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Masukkan digit angka: ");
    scanf("%d", &n);
    const char* numbers[] = {"satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};

    if (n>=1 && n<=9) {
        printf("%s", numbers[n-1]);
    } else {
        printf("Greater than 9");
    }

    return 0;
}
