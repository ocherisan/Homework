#include <stdio.h>

int main(void) {
    int table[10][10];
    
    for (int i = 0; i < 10; ++i){
        for (int j = 0; j < 10; ++j){
            table[i][j] = (i * 10 + j) * (i * 10 + j);
        }
    }
    printf("    ");
    for (int i = 0; i < 10; ++i){
        printf("%3d  ", i);
    }
    printf("\n");
    for (int i = 1; i < 10; ++i){
        printf("%2d  ", i);
        for (int j = 0; j < 10; ++j){
            printf("%4d ", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}
