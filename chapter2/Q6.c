#include<stdio.h>
#include<math.h>

int main(){

    float t, v;
    scanf("%f %f", &t, &v);

    printf("factor: %f\n", 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16));

    return 0;
}