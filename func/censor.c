void censor(char str[])
{
    while (*str != '\0') {
        if (*str == 'f' && *(str + 1) == 'o' && *(str + 2) == 'o')
            *str = *(str + 1) = *(str + 2) = 'x';
        str++;
    }
}

