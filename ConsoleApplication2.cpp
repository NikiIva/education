#include <stdio.h>

int main()
{
    int a;
    unsigned long long result = 1; //не уверен, что это си
    printf("%d", result);

    printf("Write two numbers:\n");
    scanf("%d", &a);  //он говорит, что не учитывается возвращаемое значение. Я раньше так делал
    for (int i = 1; i <= a; i++) {
        result *= i;
    }
    printf("%d", result);


}