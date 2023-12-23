#include<stdio.h>
#include<math.h>

int main(){
    
    int input;
    scanf("%d", &input);

    printf("sin: %0.4f\ncos: %0.4f\ntan: %0.4f\nsec: %0.4f\ncosec: %0.4f\ncot: %0.4f\n", sin(input), cos(input), tan(input), 1/cos(input), 1/sin(input), 1/tan(input));
    return 0;
}