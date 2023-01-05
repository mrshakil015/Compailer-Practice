//separate vowels and consonants
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char val[100],i,wspace=0,vow[100];
    scanf("%[^\n]%*c",val);
    for(i=0; val[i]!='\0'; i++)
    {
        if(val[i]=='a' || val[i]=='e' ||val[i]=='i' || val[i]=='o' || val[i]=='u' || val[i]=='A' || val[i]=='E' || val[i]=='I'|| val[i]=='O' || val[i]=='U')
        {
            printf("vowels= %c\n",val[i]);
        }
        else{
            printf("consonants= %c\n",val[i]);
        }
    }

    return 0;
}
