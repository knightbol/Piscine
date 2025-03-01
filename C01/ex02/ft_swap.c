void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 1;
	nbr2 = 2;
	ft_swap(&nbr1, &nbr2);
	return (0);
}
