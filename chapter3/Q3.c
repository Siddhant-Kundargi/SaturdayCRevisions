#include<stdio.h>

int main(){

    int year;
    scanf("%d", &year);

    (year % 400 == 0 || (year % 100 != 0) && (year % 4 == 0))?printf(""):printf("Not ");

    printf("leap year\n");

    return 0;
}