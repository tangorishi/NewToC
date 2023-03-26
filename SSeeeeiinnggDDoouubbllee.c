#include<stdio.h>
#include<string.h>
int main()
{
    char string1[100];
    char string2[100];
    int i, length;
    printf("Enter a string: ");
    gets(string1);
    length = strlen(string1);
    for(i = length - 1; i >= 0; i--)
    {
        string2[i] = string1[length - 1 - i];
    }
    string2[length] = '\0';
    puts(string2);
    
    strcat(string1, string2);
    puts(string1);
    return 0;
}
