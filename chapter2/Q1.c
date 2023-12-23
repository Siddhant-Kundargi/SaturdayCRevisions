#include<stdio.h>

int main(){

    int input, sum = 0;

    scanf("%d", &input);

    while (input > 0)
    {
        sum += input % 10;
        input = input / 10;
    }
    
    printf("%d\n", sum);

    return 0;
}