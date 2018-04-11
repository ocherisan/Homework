#include <stdio.h>

int length (char * str){
    int i = 0;
    while(*(str + i) != 0){
        i += 1;
    }
    return i;
}

char * my_strncat( char * destptr, char * srcptr, size_t num ){
    int length_des = length(destptr);
    int length_src = length(srcptr);
    int i = 0;
    for (; i < num; ++i){
        if (i == length_src){
            break;
        }
        destptr[length_des + i] = srcptr[i];
    }
    destptr[length_des + i] = 0x00;
    return destptr;
}

int main(void){
    char str1[6] = "Hello";
    char str2[7] = " world";
    char * res = my_strncat(str1, str2, 20);
    printf("%s\n", res);
    return 0;
}
