int myAtoi(char* s) 
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while (s[i] == ' ')
        i++;
    if (s[i] == '+' || s[i] == '-')
    {
        if (s[i] == '-')
            sign = -1;
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9')
    {
        res = res * 10 + (s[i] - '0');
        i++;
    }
    return (res * sign);
}