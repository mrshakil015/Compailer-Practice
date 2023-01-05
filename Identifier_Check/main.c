/*Check given string is valid or invalid*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char inp[50];
    int count=0, flag,punc;
    printf("Enter a String: ");
    gets(inp);
    if((inp[0]>='a' && inp[0]<='z') || (inp[0]>='A' && inp[0]<='Z') || (inp[0]=='_')){
        for(int i=0; i<=strlen(inp); i++){

            if((inp[i]>='a' && inp[i]<='z') || (inp[i]>='A' && inp[i]<='Z') || (inp[i]=='_') || (inp[i]>='0' && inp[i]<='9'))
            {
                count++;
            }
            else{
                flag=1;
            }
        }
    }
    else{
        flag=1;
    }

    if(count==strlen(inp) && strlen(inp)<=31)
    {
        flag=0;
    }
    else
    {
        flag=1;
    }

    if(flag==0)
    {
        printf("Valid Identifier\n");
    }
    else
    {
        printf("Invalid Identifier.\n");
    }
    return 0;
}
