#include "task.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
    int a;
    printf("Write number:\n");
    scanf("%d", &a);
    printf("%d",a);
    unsigned long long result = factorial(a);
    printf("%llu", result);//ошибка печати
}