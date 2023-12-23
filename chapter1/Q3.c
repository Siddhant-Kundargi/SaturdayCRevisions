#include<stdio.h>

int main(){

    int nextMarks, totalMarks = 0;

    for (int i = 0; i < 5; i++){
        scanf("%d", &nextMarks);
        totalMarks += nextMarks;
    }

    printf("aggergate: %d/500\npercentage = %0.2f\n", totalMarks, (float)(totalMarks/5));

    return 0;
}