#include <unistd.h>

void ft_is_negative(int i)
{
	
}

int main(void)
{
	
	// Negative test
	ft_is_negative(-2);
	// Add a new line	
	char c = '\n';
	write(1, &c, 1);
	// Zero test
	ft_is_negative(0);
	// Add a new line	
	char c = '\n';
	write(1, &c, 1);
	// Positive test	
	ft_is_negative(2);
	// Add a new line	
	char c = '\n';
	write(1, &c, 1);
	return 0;
}
