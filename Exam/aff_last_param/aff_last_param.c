#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*p_argv;
	
	p_argv = argv[argc - 1];
	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argc > 1)
	{
		while(*p_argv)
			write(1, p_argv++, 1);
		write(1, "\n", 1);
	}
	return (0);
}
