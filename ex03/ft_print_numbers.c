#include <unistd.h>

void ft_print_numbers(void)
{
	//for loop that goes through the whole alphabet
	for (char i = '0'; i <= '9'; i++) {
		write(1, &i, 1);
	}

}

int main(void)
{
	char c = '\n';
	ft_print_numbers();
	write(1, &c, 1);
	return 0;
}
