#include<stdio.h>

void printLastNumFirst(int i){

    printf("%d", i % 10);

    if (i > 10)
        printLastNumFirst(i / 10);

}

int main(){
    
    int input, sum = 0;

    scanf("%d", &input);

    printLastNumFirst(input); printf("\n");

    return 0;
}