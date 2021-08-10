#include <stdio.h>
#include <stdlib.h>
#include <string.h> // string functions
#include <ctype.h>  // char functions

int main()
{

    // char arr[] = {'a', 'b', '*', '&'};

    // printf("%s\n", arr); // ab*&

    char firstName[8] = {"Ganning"};
    char lastName[3] = {"Xu"}; // { 'X', 'u', '\0'}

    // char str1[5] = {}; // each element is '\0'
    // printf("Garbage: %s\n", str1);

    // printf("The size of firsttName: %d\n", sizeof(firstName));   // 8: includes the \0
    // printf("The length of firsttName: %d\n", strlen(firstName)); // 7: just the num of chars (without backslash 0)

    char firstNameCopy[sizeof(firstName)]; // make sure allocating enough memeory for this !

    strcpy(firstNameCopy, firstName);

    // printf("First name copy: %s\n", firstNameCopy);

    char fullName[strlen(firstName) + strlen(lastName) + 1]; // \0 takes up 1
    strcpy(fullName, firstName);
    strcat(fullName, lastName);

    // printf("Full name: %s\n", fullName);

    printf("firstName == firstNameCopy: %d\n", strcmp(firstName, firstNameCopy)); // 0 = strings are same
    printf("firstName == lastName: %d\n", strcmp(firstName, lastName));           // somethingElse = strings are diff

    // printf("Enter your full name: ");
    char str[20];
    // gets(str);

    // puts(str);

    // char functions: 0 = false, somethingElse = true
    printf("h is a letter %d\n", isalpha('a')); // character functions
    printf("5 is a letter %d\n", isdigit('a'));
    return 0;
}
