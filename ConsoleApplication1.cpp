#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

int main()
{
    int a;
    int b;

    printf("Write two numbers:");
    scanf("%d%d", &a,&b);  //он говорит, что не учитывается возвращаемое значение. Я раньше так делал
    if (a < b) {
        int c = a;
        a = b;
        b = c;
    }
    printf("%d",gcd(a,b));


}