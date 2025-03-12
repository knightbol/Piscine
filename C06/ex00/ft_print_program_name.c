#include <unistd.h>

void	ft_printstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc >= 1)
		ft_printstr(argv[0]);
	return (0);
}
