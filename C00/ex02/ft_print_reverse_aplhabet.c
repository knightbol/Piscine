#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet()
{
	char chr = 'z';
	
	while (chr >= 'a')
	{
		ft_putchar(chr);
		chr--;
	}
}

int	main()
{
	ft_print_alphabet();
	ft_putchar('\n');
}
