void capitalize(char str[])
{
    while (*str != '\0') {
        if (isalpha(*str)) 
            *str = toupper(*str);
        str++;
    }
}
