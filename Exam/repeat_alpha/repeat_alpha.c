#include <unistd.h>

int	main(int argc, char **argv)
{
	int	amt;
	char	*p_argv;

	amt = 0;
	p_argv = *(argv + 1);
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (*p_argv)
	{
		if ((*p_argv >= 'A' && *p_argv <= 'Z') || (*p_argv >= 'a' && *p_argv <= 'z'))
		{
			if (*p_argv >= 'A' && *p_argv <= 'Z')
				amt = *p_argv - 64;
			else if (*p_argv >= 'a' && *p_argv <= 'z')
				amt = *p_argv - 96;
			if (amt >= 1)
			{
				while (amt >= 1)
				{
					write(1, p_argv, 1);
					amt--;
				}
			}
		}
		p_argv++;
		amt = 0;
	}
	write(1, "\n", 1);
	return (0);
}



/*
 
so for uppercase -64 for lowcase -96 to get the amount of times we need to print
 
 */
