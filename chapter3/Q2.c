#include<stdio.h>

int main(){

    int input;
    scanf("%d", &input);
    
    (input % 2)?printf("Odd\n"):printf("Even\n");

    return 0;
}