#include <iostream>

int converter(char* str, int index) { 
    return (str[index] - '0') * 10 + (str[index + 1] - '0');
}

//https://docs.microsoft.com/ru-ru/office/troubleshoot/excel/determine-a-leap-year
bool isLeapYear(int year) {
    if (year % 4 != 0 || year % 100 == 0 && year % 400 != 0)
        return false;
    return true;
}



struct Date {
    int day;
    int month;
    int year;
       
   

    int format(char* str, int index) {
        return (str[index] - '0') * 10 + (str[index + 1] - '0');
    }

    void initialize(char * str) {
        day = format(str, 0);
        month = format(str, 3);
        year = format(str, 6)*100 + format(str,8);
        
       
        if (month < 1 || month > 12) {
            printf("\nincorrect month\n");
        }

        if (month == 2 && isLeapYear(year)) {
            if (day > 29) {
                printf("\nday in February: in leap-year bigger than 29\n");
            }
            
        }

        if (month == 2 && !isLeapYear(year)) {
            if (day > 28)
                printf("\nincorrect day for February: in not-leap-year bigger than 28\n");
        }
        
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            if (day > 31) {
                printf("\nThe day is bigger than 31\n");
            }
        } 


        if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day > 30) {
                printf("\nThe day is bigger than 30\n");
            }
        }
                      

    }
};

int days(struct Date A) {
    int result = 0;
    for (int i = 0; i < A.month; i++) {
        if (i == 2) {
            if (isLeapYear(A.year))
                result += 29;
            else
                result += 28;
        }
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
            result += 31;
        }
        if (i == 4 || i == 6 || i == 9 || i == 11) {
            result += 30;
        }
    }
    result += A.day; //включаем день
    return result;

}


int main()
{
   
    struct Date A;
    struct Date B;
    char str1[11];
    char str2[11];
    printf("input both date: dd/mm/yyyy\n");
    scanf("%s", &str1);
    int year1 = converter(str1, 6) * 100 + converter(str1, 8);  //можно ли достучаться до формат? не имея экзмепляра структуры?    
    scanf("%s", &str2);
    int year2 = converter(str2, 6) * 100 + converter(str2, 8);


    if (year1 < year2) {
        A.initialize(str1);
        B.initialize(str2);
    }
    else {
        A.initialize(str2);
        B.initialize(str1);
    }
    
   


    int result = 0;
    for (int year = A.year + 1; year < B.year; year++) {     
        if (isLeapYear(year)) {
            
            result += 366;
        }
        else
            result += 365;
    }

    int a;
    if (isLeapYear(A.year)) {
        a = 366 - days(A);
    }
    else {
        a = 365 - days(A);
    }

    int b;
    if (isLeapYear(B.year)) {
        b = days(B);
    }
    else {
        b = days(B);
    }
    result += abs(a+b);
    printf("\nThe result is %d\n", result);    
 
}