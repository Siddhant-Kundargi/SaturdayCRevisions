#include<stdio.h>
#include<math.h>

int main(){

    
    int x, y;
    scanf("%d %d", &x, &y);

    float r = sqrt(x*x + y*y);
    float angle = atan(y / x);

    printf("r: %0.2f\na: %0.2f\n", r, angle);

    return 0;
}