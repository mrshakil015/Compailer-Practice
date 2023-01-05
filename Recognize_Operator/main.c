/*Write ac program that can recognize what kind of operator a particular input is, and print accordingly.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch[100];
    for(;;)
    {
        printf("\nEnter Your Character: ");
        gets(ch);

        if(strcmp(ch,"+")==0)
        {
            printf("Addition Operator");
        }
        else if(strcmp(ch,"-")==0)
        {
            printf("Subtraction Operator");
        }
        else if(strcmp(ch,"*")==0)
        {
            printf("Multiplication Operator");
        }
        else if(strcmp(ch,"/")==0)
        {
            printf("Division Operator");
        }
        else if(strcmp(ch,"++")==0)
        {
            printf("Increment Operator");
        }
        else if(strcmp(ch,"=")==0)
        {
            printf("Equal Operator");
        }
        else if(strcmp(ch,"==")==0)
        {
            printf("Equal to Operator");
        }
        else if(strcmp(ch,">")==0)
        {
            printf("Grater than Operator");
        }
        else if(strcmp(ch,"<")==0)
        {
            printf("Less than Operator");
        }
        else if(strcmp(ch,"!=")==0)
        {
            printf("Not equal to Operator");
        }
        else if(strcmp(ch,">=")==0)
        {
            printf("Grater than or equal to Operator");
        }
        else if(strcmp(ch,"<=")==0)
        {
            printf("Less than or equal to Operator");
        }
        else if(strcmp(ch,"&&")==0)
        {
            printf("Logical AND Operator");
        }
        else if(strcmp(ch,"||")==0)
        {
            printf("Logical OR Operator");
        }
        else if(strcmp(ch,"!")==0)
        {
            printf("Logical NOT Operator");
        }
        else if(strcmp(ch,"&")==0)
        {
            printf("Bitwise AND Operator");
        }
        else if(strcmp(ch,"|")==0)
        {
            printf("Bitwise OR Operator");
        }
        else if(strcmp(ch,"^")==0)
        {
            printf("Bitwise exclusive OR Operator");
        }
        else if(strcmp(ch,"~")==0)
        {
            printf("Bitwise complement Operator");
        }
        else if(strcmp(ch,"<<")==0)
        {
            printf("Shift Left Operator");
        }
        else if(strcmp(ch,">>")==0)
        {
            printf("Shift Right Operator");
        }
        else if(strcmp(ch,"?:")==0)
        {
            printf("Ternary Operator");
        }
    }


    return 0;
}
