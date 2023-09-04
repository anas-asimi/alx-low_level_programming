#include "main.h"
#include <stdlib.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * strtow - splits a string into words.
 * @str: the string
 *
 * Return: returns a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	    int i = 0;
    int numberOfWords = 0;
    int totalLenght = 0;
    char string[] = "     123    456 789 ";

    /* calcule number of words and caracters */
    while(string[i])
    {
        printf("checking : %c\n",string[i]);
        if(string[i] ==' ')
        {
            printf("its white space\n");
            i++;
            continue;
        }
        
        printf("tis not white space\n");
        numberOfWords++;
        while(string[i] !=' ' && string[i])
        {
            totalLenght++;
            i++;
            
        }

    }
    printf("found : %d words\n",numberOfWords);
    printf("lenght : %d\n",totalLenght);

}
