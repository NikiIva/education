#include "task.h"

void swap(int* a, int* b) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int gcdRec( int a, int b) {
    setlocale(LC_ALL, "Russian");    
    swap(&a, &b);
    if (b == 0)
        return a;
    return gcdRec(b, a % b);
}


int gcdCyc(int a, int b) {
    int temp;
    swap(&a, &b);
    while (b != 0) {
        temp = a;
        a = b;
        b = temp % b;
    }
    return a;

}
