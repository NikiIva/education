#include "task.h"
#include <stdio.h>

int main() {
    unsigned long long a;
    printf("Write two numbers:\n");
    scanf("%d", &a);
    printf("%d", factorial(a));
}