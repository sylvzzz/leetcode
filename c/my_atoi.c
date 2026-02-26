#include <limits.h>

long myAtoi(char* s) 
{
    int i = 0;
    int sign = 1;
    long res = 0;

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
        int digit = s[i] - '0';
        if (res > (LONG_MAX - digit) / 10)
        {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        res = res * 10 + digit;
        i++;
    }
    res *= sign;
    if (res > INT_MAX)
        return INT_MAX;
    if (res < INT_MIN)
        return INT_MIN;

    return res;
}