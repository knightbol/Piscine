#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 1)
	{
		write(1, "a\n", 2);
		return (0);
	}
	if (argc == 2)
	{
		argv++;  		// &argv[1]
		str = *argv; 		// "Hello"
		while (*str)
		{
			if(*str == 'a')
			{
				write(1, "a\n", 2);
				return (0);
			}
			str++;
		}
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}
