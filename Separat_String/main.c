#include <stdio.h>
#include <string.h>

int main() {
    char words[1000][100];
    int x = 0, y;

    char myString[10000] = "aa b aa ccd";
    printf("Original Text:\n");
    printf("%s\n", myString);

    // Function for uppercase letters to become lowercase and to remove special characters
    for (x = 0; x <= strlen(myString); ++x) {
        if (myString[x] >= 65 && myString[x] <= 90)
            myString[x] = myString[x] + 32;
    }
    for (x = 0; myString[x] != '\0'; ++x) {
        while (!(myString[x] >= 'a' && myString[x] <= 'z') &&
               !(myString[x] >= 'A' && myString[x] <= 'Z') &&
               !(myString[x] >= '0' && myString[x] <= '9') &&
               !(myString[x] == '\0') && !(myString[x] == ' ')) {
            for (y = x; myString[y] != '\0'; ++y) {
                myString[y] = myString[y + 1];
            }
            myString[y] = '\0';
        }
    }

    printf("\nModified Text: \n%s\n", myString);

    // Part A
    int counts[26] = { 0 };
    int k;
    size_t myString_length = strlen(myString);

    for (k = 0; k < myString_length; k++) {
        char c = myString[k];
        if (!isalpha(c))
            continue;
        counts[(int)(c - 'a')]++;
    }

    printf("\nLetter\tCount\n------  -----\n");

    for (k = 0; k < 26; ++k) {
        printf("%c\t%d\n", k + 'a', counts[k]);
    }

    // Part B
    int i = 0, count = 0, occurrences[10000] = { 0 };

    while (myString[i] != '\0') {
        char wordArray[100];
        int j = 0;

        while (myString[i] != ' ' && myString[i] != '\0') {
            wordArray[j++] = myString[i++];
        }

        if (wordArray[j - 1] == ',' || wordArray[j - 1] == '.') {
            wordArray[j - 1] = '\0';
        }

        wordArray[j] = '\0';

        int status = -1;

        for (j = 0; j < count; ++j) {
            if (strcmp(words[j], wordArray) == 0) {
                status = j;
                break;
            }
        }

        if (status != -1) {
            occurrences[status] += 1;
        } else {
            occurrences[count] += 1;
            strcpy(words[count++], wordArray);
        }
        ++i;
    }

    printf("\nWord Length\tOccurrences\n-----------     -----------\n");

    for (i = 0; i < count; ++i) {
        // print each word and its occurrences
        printf("%s\t\t%d\n", words[i], occurrences[i]);
    }
}
