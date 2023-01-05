//count number of whitespace
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char val[100],i,wspace=0;
    scanf("%[^\n]%*c",val);
    for(i=0; val[i]!='\0'; i++)
    {
        if(val[i]==' ')
        {
            wspace++;
        }
    }
    printf("White space is: %d",wspace);
    return 0;
}
