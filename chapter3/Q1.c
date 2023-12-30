#include<stdio.h>

int main(){

    int cp, sp;

    scanf("%d %d", &cp, &sp);

    (cp > sp)?printf("Loss of: %d\n", cp - sp):printf("Gain of: %d\n", sp - cp);

    return 0;
}