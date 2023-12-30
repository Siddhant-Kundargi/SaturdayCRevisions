#include<stdio.h>

int isLeap(int year){
    return ((year % 400 == 0 || (year % 100 != 0) && (year % 4 == 0))?1:0);
}

int main(){

    int year, currentYear = 1, sum = 1;
    scanf("%d", &year);

    char* daysOfTheWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    while (currentYear < year)
        if (isLeap(currentYear++))
            sum = (sum + 366) % 7;
        else
            sum = (sum + 365) % 7;

    printf("%s\n", daysOfTheWeek[sum]);

    return 0;
}