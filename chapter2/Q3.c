#include<stdio.h>
#include<math.h>

int main(){

    int input[3], sum = 0;
    for (int i = 0; i < 3; i++){
        scanf("%d", &input[i]);
        sum += input[i];
    }
    
    float s = sum / 2.0;

    printf("area: %0.2f\n", (float)sqrt(s*(s-input[0])*(s-input[1])*(s-input[2])));

    return 0;
}