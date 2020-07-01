#include "task.h"

int converter(int size, char* chars) {    
    int result = 0;

    for (int i = 0; i < size; i++) {

        if (chars[i] >= '0' && chars[i] <= '9') {
            result = result * 10 + (chars[i] - '0');
        }
        else if (chars[i] == 0) {
            break;
        }
        else {           
            printf("This string can`t be convertated.");
            return;
        }
    }

    return result;
}