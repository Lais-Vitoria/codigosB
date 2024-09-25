#ifndef vogal_h
#define vogal_h

char EhMinuscula( char C)
{
    if (C >= 'a' && C <= 'z' || C >= 'A' && C <= 'Z')
    {
        if (C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'U')
        {
            return 1;
        }
    }
    return 0;
}

#endif