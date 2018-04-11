#include <stdio.h>

int main(void){
    float a = 0;
    float b = 0;
    float c = 0;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if (a + b < c || a + c < b || b + c < a){
        printf("False\n");
    }
    else{
        a = a * a;
        b = b * b;
        c = c * c;
        if (a == b + c || b == a + c || c == a + b){
            printf("True\n");
        }
        else{
            printf("False\n");
        }
    }
    return 0;
}
