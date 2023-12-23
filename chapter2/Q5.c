#include<stdio.h>
#include<math.h>

int main(){

    float L1, L2, G1, G2;

    scanf("%f %f %f %f", &L1, &L2, &G1, &G2);

    printf("%0.4f\n", 3963 * acos (sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1)));

    return 0;
}