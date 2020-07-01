#include "task.h"

int gcd(int a, int b) {
    if (a < b) {
        int c = a;
        a = b;
        b = c;
    }
    if (b == 0)
        return a;
    return gcd(b, a % b);
}