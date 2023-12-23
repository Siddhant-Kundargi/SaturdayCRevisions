#include<stdio.h>

int main(){

    float tempInF;

    scanf("%f", &tempInF);

    printf("%0.2f\n", (tempInF - 32) * 5/9);

    return 0;
}