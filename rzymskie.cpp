//
// Created by wiktor on 14.06.2024.
//
#include "rzymskie.h"
#include <cstring>

void intToRoman(int num, char *result) {
    const char *thousands[] = {"", "M", "MM", "MMM"};
    const char *hundreds[]  = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    const char *tens[]      = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    const char *ones[]      = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    strcat(result, thousands[num / 1000]);
    strcat(result, hundreds[(num % 1000) / 100]);
    strcat(result, tens[(num % 100) / 10]);
    strcat(result, ones[num % 10]);
}


int value(char r) {
    switch(r) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(const char *roman) {
    int total = 0;
    int prev_value = 0;

    for (int i = strlen(roman) - 1; i >= 0; i--) {
        int curr_value = value(roman[i]);
        if (curr_value >= prev_value) {
            total += curr_value;
        } else {
            total -= curr_value;
        }
        prev_value = curr_value;
    }

    return total;
}
