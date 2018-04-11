#include <stdio.h>

int main(void){
    char c;
    int symbol_counter = 0;
    int digit_counter = 0;
    while ((c = getc(stdin)) != EOF){
        if ((c >= '0') && (c <='9'))
            digit_counter += 1;
        else if ((c >= 'a') && (c <='z'))
            symbol_counter += 1;
    }
    printf("Digits: %d\n", digit_counter);
    printf("Latin symbols: %d\n", symbol_counter);
}
