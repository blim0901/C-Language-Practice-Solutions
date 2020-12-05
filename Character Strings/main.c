/*
//Question 2 - locateFirstChar
#include <stdio.h>
#include <string.h>
int locateFirstChar(char *str, char ch);
int main()
{
    char str[40], ch, *p;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("Enter the target character: \n");
    scanf("%c", &ch);
    printf("locateFirstChar(): %d\n", locateFirstChar(str, ch));
    return 0;
}
int locateFirstChar(char *str, char ch)
{
    int i, x=0;
    for (i=0; i<strlen(str); i++)
    {
        if(str[i] == ch)
            return x;
        else
            x+=1;

    }
    return -1;
}



//Question 4 - countWords
#include <stdio.h>
#include <string.h>
int countWords(char *s);
int main()
{
    char str[50], *p;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("countWords(): %d", countWords(str));
    return 0;
}
int countWords(char *s)
{
    int state = 0;
    unsigned wc = 0;  // word count

    // Scan all characters one by one
    while (*s)
    {
        // If next character is a separator, set the
        // state as OUT
        if (*s == ' ' || *s == '\n' || *s == '\t')
            state = 0;

        // If next character is not a word separator and
        // state is OUT, then set the state as IN and
        // increment word count
        if (state == 0)
        {
            state = 1;
            ++wc;
        }

        // Move to next character
        ++s;
    }

    return wc;
}

*/

//Question 6 - longestStrInAr
#include <stdio.h>
#include <string.h>
#define N 20
char *longestStrInAr(char str[N][40], int size, int *length);
int main()
{
    int i, size, length;
    char str[N][40], first[40], last[40], *p, *result;
    char dummychar;

    printf("Enter array size: \n");
    scanf("%d", &size);
    scanf("%c", &dummychar);
    for (i=0; i<size; i++) {
        printf("Enter string %d: \n", i+1);
        fgets(str[i], 40, stdin);
        if (p=strchr(str[i],'\n')) *p = '\0';
    }
    result = longestStrInAr(str, size, &length);
    printf("longest: %s \nlength: %d\n", result, length);
    return 0;
}
char *longestStrInAr(char str[N][40], int size, int *length)
{
    int  i=1, j=0;
    *length = strlen(str[0]);

    while (i<size)
    {
        if (*length < strlen(str[i]))
        {
            *length = strlen(str[i]);
            j = i;
        }

        i++;
    }

    return str[j];
}

/*

//Question 8 - maxCharToFront
#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main()
{
    char str[80], *p;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';
    printf("maxCharToFront(): ");
    maxCharToFront(str);
    puts(str);
    return 0;
}
void maxCharToFront(char *str)
{
    int  i = 0;
    int pos=0;


     while (str[i] != '\0')
     {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z'))
            {
                if (str[i] > str[pos])
                {
                    pos = i;
                }
            }
            i++;
     }

     char large = str[pos];

     for(int i = pos; i > 0; i--)
        str[i] = str[i-1];

      str[0] = large;
}
*/
