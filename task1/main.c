#include "task.h"
#include <stdio.h>

int main(){
    int a;
    int b;
    printf("Write two numbers:\n");
    scanf("%u%u", &a, &b);
    swap(&a,&b);
    printf("The answer is %d", gcdCyc(a, b));
}