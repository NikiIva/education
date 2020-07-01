#include "task.h"
#include <stdio.h>

int main(){
    int size;
    printf("Write size of string_to_int:\n");
    scanf("%d", &size);
    size++;
    char* chars = (char*)malloc((size) * sizeof(char));
    printf("Write string_to_int:\n");
    scanf("%s", chars);
    int result = converter(size, chars);
    printf("%d", result);
    free(chars);
}
