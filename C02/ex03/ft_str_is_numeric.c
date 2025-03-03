#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return 0;
		i++;
	}
	return 1;
}

int	main(void)
{
	char	str1[] = "001a0010";
	
	int t = ft_str_is_alpha(str1);
	printf("%d", t);
	return(0);
}

