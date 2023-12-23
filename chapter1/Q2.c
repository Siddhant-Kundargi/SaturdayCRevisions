#include<stdio.h>

int main(){

    float distanceInKM;

    scanf("%f", &distanceInKM);

    float m = distanceInKM * 1000, cm = m * 100, feet = m * 3.281, inch = feet * 12;

    printf("in m: %0.2f\nin cm: %0.2f\nin feet: %0.2f\nin inches: %0.2f\n", m, cm, feet, inch);

    return 0;
}