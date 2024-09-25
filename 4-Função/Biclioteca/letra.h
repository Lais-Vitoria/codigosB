#ifndef letra_h
#define letra_h

char ehconsoante(char L)
{
    if (L >= 'a' && L <= 'z' || L >= 'A' && L <= 'Z')
    {
        if (L != 'a' && L != 'e' && L != 'i' && L != 'o' && L != 'u' &&
            L != 'A' && L != 'E' && L != 'I' && L != 'O' && L != 'U')
        {
            return 1;
        }
        
    }
    return 0;
}

#endif