void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	nbr;
	int	*p1_nbr = &nbr;
	int	**p2_nbr = &p1_nbr;
	int ***p3_nbr = &p2_nbr;
	int ****p4_nbr = &p3_nbr;
	int *****p5_nbr = &p4_nbr;
	int ******p6_nbr = &p5_nbr;
	int *******p7_nbr = &p6_nbr;
	int ********p8_nbr = &p7_nbr;
	int *********p9_nbr = &p8_nbr;
	ft_ultimate_ft(p9_nbr);
	return (0);
}
