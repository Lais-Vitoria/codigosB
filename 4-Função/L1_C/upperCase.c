#include <stdio.h>

char to_upper_case(char string[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i]= string[i] - 32;
        }
        
    }
    printf("%s\n", string);

    return 0;
}

int main()
{
    char string[] = "ola, mundo";

    to_upper_case(string);
}