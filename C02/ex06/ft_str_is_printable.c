#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			return 0;
		i++;
	}
	return 1;
}

int	main(void)
{
	char	str1[] = "ADAD";
	
	int t = ft_str_is_printable(str1);
	printf("%d", t);
	return(0);
}

