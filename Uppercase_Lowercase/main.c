//Write a C program that takes input of a letter and transforms it into its equivalent uppercases or lowercase letter

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char val,re;
    scanf("%c",&val);
    if(val>='A' && val<='Z')
    {
            printf("Lowercase is: %c",tolower(val));
    }
    else{
            printf("Uppercase is: %c",toupper(val));

    }

    return 0;
}
