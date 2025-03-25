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
int	ft_atoi_base(char *str, char  *base)
{
	if (!str || !ft_is_valid_base(base))
		return (0);
	if 
}
