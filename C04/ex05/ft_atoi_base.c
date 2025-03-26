int	ft_is_whitespace(char str)
{
	if (str == ' ' || str == '\n' 
		|| str == '\t' || str == '\f' 
		|| str == '\v' || str == '\r')
		return (1);
}

int	ft_is_valid_base(char *base)
{
	char	freq[256] = {0};

	if (!base || base[0] == '\0' 
			|| (base[0] != '\0' && base[1] == '\0'))
		return (0);
	while (*base)
	{
		if (*base == '-' || *base == '+' 
				|| *base == ' ' || *base == '\n' 
				|| *base == '\t')
			return (0);
		if (freq[*base] == 1)
			return (0);
		freq[*base++] = 1;
	}
	return (1);
}
int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	digit;

	result = 0;
	digit = 0;
	if (!str || !ft_is_valid_base(base))
		return (0);
	while (ft_is_whitespace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result += (*str - 48);
		result *= 10;
	}
}
