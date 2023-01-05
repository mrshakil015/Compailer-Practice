#include<stdio.h>
#include<string.h>
int main()
{


    char in[100], operators[100], punctuations[100], a, str[50], punctuation[100];
    char identifiers[100][100], keywords[100][100], rem[100];
    int i, j, k, punctuationsCount=0, l, key=0;
    int operatorCount=0, punctuationCount=0, identifierCount=0,remop=0, keywordCount=0;

    char keyword[32][10]=
    {
        "auto","double","int","struct","break","else","long",
        "switch","case","enum","register","typedef","char",
        "extern","return","union","const","float","short",
        "unsigned","continue","for","signed","void","default",
        "goto","sizeof","voltile","do","if","static","while"
    } ;
    printf("Enter string: ");
    gets(in);
    for(i=0; i<strlen(in); i++)
    {

        int n=0;
        while(in[i]!=' ' && in[i]!='\0')
        {
            if(ispunct(in[i]) != 0 )
            {
                punctuation[punctuationsCount]=in[i];
                punctuationsCount++;
                break;
            }
            else
            {

                str[n]=in[i];
                n++;
                i++;
            }
        }
        str[n]='\0';

        for(k=0; k<32; k++)
        {
            if(strcmp(str,keyword[k])==0)
            {

                for(key=0; key<strlen(str); key++)
                {
                    keywords[keywordCount][key]=str[key];
                }
                keywordCount++;
                key=0;
                break;
            }
            else
            {
                if(k==31)
                {
                    for(key=0; key<strlen(str); key++)
                    {
                        identifiers[identifierCount][key]=str[key];
                    }
                    identifierCount++;
                    key=0;
                }

            }

        }
        strcpy(str, "");
    }

    keywords[keywordCount][0]='\0';
    identifiers[identifierCount][0]='\0';

    for(l=0; l<punctuationsCount; l++)
    {
        if(punctuation[l]=='+' || punctuation[l]=='-')
        {
            operators[operatorCount]=punctuation[l];
            operatorCount++;
        }
        else if(punctuation[l]=='*' || punctuation[l]=='/' || punctuation[l]=='=')
        {
            operators[operatorCount]=punctuation[l];
            operatorCount++;
        }
        else if(punctuation[l]=='(' || punctuation[l]==')' || punctuation[l]=='{' || punctuation[l]=='}' || punctuation[l]=='[' || punctuation[l]=='|' )
            {
                rem[remop]=punctuation[l];
                remop++;

            }
        else
        {
            punctuations[punctuationCount]=punctuation[l];
            punctuationCount++;
        }
    }

    operators[operatorCount]='\0';
    punctuations[punctuationCount]='\0';

    printf("\n\n");

    printf("Variable: ");
    for(j=0; j<identifierCount; j++)
    {
        printf("%s ", identifiers[j]);
    }

    printf("\n\n");




    printf("Operator: ");
    for(j=0; j<operatorCount; j++)
    {
        printf("%c ", operators[j]);
    }
    printf("\n\n");

    printf("Keyword: ");
    for(j=0; j<keywordCount; j++)
    {
        printf("%c ", keywords[j]);
    }
    printf("\n\n");

    printf("Punctuation: ");
    for(j=0; j<punctuationCount; j++)
    {
        printf("%c ", punctuations[j]);
    }
    printf("\n\n");
    return 0;
}
