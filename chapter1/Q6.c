#include<stdio.h>

struct PaperSize
{
    int l;
    int b;
} Arr[9];

void printPaperSize(int size, struct PaperSize an){

    printf("Paper size: A%d: %d x %d\n", size, an.l, an.b);
}

int main(){

    Arr[0].l = 1189; Arr[0].b = 841; printPaperSize(0, Arr[0]);

    for (int i = 1; i < 8; i++)
    {
        Arr[i].l = Arr[i - 1].b;
        Arr[i].b = Arr[i - 1].l / 2;

        printPaperSize(i, Arr[i]);
    }

    return 0;
}