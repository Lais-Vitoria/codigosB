#include <stdio.h>

 char to_lower_case(char string[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i]= string[i] + 32;
        }
        
    }
    printf("%s\n", string);

    return 0;
}

int main()
{
    char string[] = "OLA, MUNDO";

    to_lower_case(string);
}