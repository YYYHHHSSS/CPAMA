int count_spaces(const char s[])
{
    int count = 0;

    while (*s != '\0') {
        if (*s++ == ' ') 
            count++;
    }
}
