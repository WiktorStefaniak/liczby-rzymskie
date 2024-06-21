#include <iostream>
#include "rzymskie.h"

void menu() {
    printf("Menu:\n");
    printf("1. Liczba rzymska na calkowita\n");
    printf("2. Liczba calkowita na rzymska\n");
    printf("3. Wyjscie\n");
    printf("Wybierz opcje: ");
}

int main() {
    int choice;
    char roman[20];
    int number;
    char result[20];

    while (1) {
        menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Podaj liczbe rzymska: ");
                scanf("%s", roman);
                number = romanToInt(roman);
                printf("Liczba calkowita: %d\n", number);
                break;
            case 2:
                printf("Podaj liczbe calkowita: ");
                scanf("%d", &number);
                if (number <= 0 || number > 3999) {
                    printf("Podaj liczbe z zakresu od 1 do 3999\n");
                } else {
                    intToRoman(number, result);
                    printf("Liczba rzymska: %s\n", result);
                }
                break;
            case 3:
                exit(0);
            default:
                printf("!!SPROBUJ PONOWNIE!!\n");
        }
    }
    return 0;
}