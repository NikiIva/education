#include "task.h"
#include <stdio.h>

unsigned long long factorial(int a) {
    unsigned long long result = 1;
    for (int i = 1; i <= a; i++) {
        result *= i;
    }
    return result;
}