#include<stdio.h>

int main(){

    int l, b, r;

    scanf("%d %d %d", &l, &b, &r);

    printf("area: %d\nperi: %d\narea(circle): %0.2f\ncircum: %0.2f\n", l*b, 2*(l+b), (float)(3.14 * r * r), (float)(3.14 * r * 2));

    return 0;
}