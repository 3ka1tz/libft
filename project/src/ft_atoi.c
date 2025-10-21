int ft_atoi(const char *nptr)
{
    while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
        nptr++;

    int sign = 1;
    if (*nptr == '+')
    {
        nptr++;
    }
    else if (*nptr == '-')
    {
        sign = -1;
        nptr++;
    }

    int result = 0;
    while (*nptr >= '0' && *nptr <= '9')
    {
        result = result * 10 + (*nptr - '0');
        nptr++;
    }

    return (sign * result);
}
