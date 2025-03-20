#include <unistd.h>

int	main(int argc, char **argv)
{
	char	find;
	char	replace;
	char	*p_argv;
	
	p_argv = *(argv + 1);
	if (argc != 4 || (!argv[2][1] && !argv[3][1]))
	{
		write(1, "\n", 1);
		return (0);
	}
	find = **(argv + 3);
	replace = **(argv + 2);
	return (0);
}
