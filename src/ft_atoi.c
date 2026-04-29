static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	while (ft_isspace(*nptr))
		nptr++;
	sign = 1;
	if (*nptr == '+')
		nptr++;
	else if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	result = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * result);
}
