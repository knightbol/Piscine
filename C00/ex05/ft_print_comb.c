#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	char i = '0';
	char j = '1';
	char z = '2';

	while((i != '7') && (j != '8') && (z != '9'))
	{
		while(j != i + '1')
		{
			ft_putchar(i);
			ft_putchar(j);
			ft_putchar(z);
			z++
		}	
	}
}

int main()
{
	ft_print_comb();
	return (0);
}
