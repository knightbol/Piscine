#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char chr = 'a';
	
	while (chr <= 'z')
	{	
		ft_putchar(chr);
		chr++;
	}
}

int	main()
{
	ft_print_alphabet();
	ft_putchar('\n');
}
