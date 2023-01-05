#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int  i,j,k,count=0,size;

    printf("Enter  the string : ");
    gets(str);
    size= strlen(str);

    printf("\nFrequency count character in string:\n");

    for(i=0; i<size; i++)
    {
        count=1;
        if(str[i])
        {

            for(j=i+1; j<size; j++)
            {

                if(str[i]==str[j])
                {
                    count++;
                    str[j]='\0';
                }
            }
            printf("Frequency of '%c' = %d \n",str[i],count);

        }
    }
    return 0;
}
