int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;
    int digit;

    while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
    {
        if (s[i] == '-')
            sign *= -1;
        else if (s[i] == '+')
            sign *= 1;
        i++;
    }

    while (s[i] >= '0' && s[i] <= '9')
    {
        digit = s[i] - '0';
        if (result > (2147483647 - digit) / 10)
        {
            return (sign == 1) ? 2147483647 : -2147483648;
        }
        result = result * 10 + digit;
        i++;
    }

    return (sign * result);
}
