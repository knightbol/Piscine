#include <unistd.h>

void ft_print_alphabet(void)
{
	//for loop that goes through the whole alphabet
	for (char c = 'a'; c <= 'z'; c++) {
		write(1, &c, 1);
	}

}

int main(void)
{
	char c = '\n';
	ft_print_alphabet();
	write(1, &c, 1);
	return 0;
}
