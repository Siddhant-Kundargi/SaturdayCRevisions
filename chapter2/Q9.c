#include<stdio.h>

int main(){

    int denominations[] = {100, 50, 10, 5, 2, 1};

    int input, notesCount = 0;
    scanf("%d", &input);

    for (int i = 0; i < 6; i++){

        notesCount += input / denominations[i];
        input = input % denominations[i];
    }
    
    printf("Number of notes needed: %d\n", notesCount);
    return 0;
}