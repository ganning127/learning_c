#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printString(char name[])
{
    for (int i = 0; i < strlen(name); i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");
}

void copyString(char source[], char dest[])
{
    for (int i = 0; i < strlen(source); i++)
    {
        dest[i] = source[i];
    }
    dest[strlen(source)] = '\0';
}

int main()
{
    char name[] = "Ganning Xu";
    char copy[strlen(name) + 1];
    copyString(name, copy);
    printf("%s\n", copy);

    return 0;
}
