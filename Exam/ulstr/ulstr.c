#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*p_argv;
	char	c;

	c = '\0';
	p_argv = *(argv + 1);
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (*p_argv)
	{
			if (*p_argv >= 'A' && *p_argv <= 'Z')
				c = *p_argv + 32;
			else if (*p_argv >= 'a' && *p_argv <= 'z')
				c = *p_argv - 32;
			else
				c = *p_argv;
			write(1, &c, 1);
			p_argv++;
	}
	write(1, "\n", 1);
	return (0);
}
