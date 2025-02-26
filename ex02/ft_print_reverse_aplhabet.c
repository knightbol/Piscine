#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	//for loop that goes through the whole alphabet
	for (char c = 'z'; c >= 'a'; c--) {
		write(1, &c, 1);
	}

}

int main(void)
{
	char c = '\n';
	ft_print_reverse_alphabet();
	write(1, &c, 1);
	return 0;
}
