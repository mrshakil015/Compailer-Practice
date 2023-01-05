//remove extra whitespace
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char val[100],i,wspace;
    scanf("%[^\n]%*c",val);
    for(i=0; val[i]!='\0'; i++)
    {
        if(val[i]==' ')
        {
            if(val[i+1]==' ')
            {
                val[i+1]-val[i];
            }
            else{
                printf(" ");
            }

        }
        else{

            printf("%c",val[i]);
        }
    }
    return 0;
}
