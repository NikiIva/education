#include "task.h"
#include <stdio.h>


int main()
{
    int a;
    int b;
    printf("Write two numbers:\n");
    scanf("%d%d", &a, &b);
    printf("%d", gcd(a, b));
}