#include "task.h"
#include <stdio.h>

void converter(int size,char * chars) {
    bool canBeConversed = true;
    int result = 0;

    for (int i = 0; i < size; i++) {

        if (chars[i] >= '0' && chars[i] <= '9') {
            result = result * 10 + (chars[i] - '0');
        }
        else if (chars[i] == 0) {
            break;
        }
        else {
            canBeConversed = false;
            printf("This string can`t be conversed.");
            break;
        }
    }

    if (canBeConversed)
        printf("\nThe number is %d", result);
}


int main()
{
    int size;
    printf("Write size of string_to_int:\n");
    scanf("%d", &size);
    size++;

    char* chars = (char*)malloc((size) * sizeof(char));
    printf("Write string_to_int:\n");
    scanf("%s", chars);
 
    converter(size, chars);
   

    free(chars);
}
