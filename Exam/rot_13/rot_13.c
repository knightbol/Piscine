#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*p_argv;
	unsigned char	c;
	int	diff;

	diff = 0;
	p_argv = *(argv + 1);
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (*p_argv)
	{
		diff = 0;
		if (*p_argv >= 'A' && *p_argv <= 'Z')
		{
			c = *p_argv + 13;
			if (c > 'Z')
			{
				diff = (c - 'Z' - 1);
				c = 'A' + diff;
			}
		}
		else if (*p_argv >= 'a' && *p_argv <= 'z')
		{
			c = *p_argv + 13;
			if (c > 'z')
			{
				diff = (c - 'z' - 1);
				c = 'a' + diff;
			}
		}
		else
			c = *p_argv;
		write(1, &c, 1);
		p_argv++;		
	}
	write(1, "\n", 1);
	return (0);
}

