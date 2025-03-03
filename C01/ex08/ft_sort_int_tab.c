void print_arr(int *tab, int size)
{
	int	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		if (i < size / 2)
		{
			if (tab[i] < tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
			}
			else
				i++;
		}

		if (i > size / 2)
		{
			if (tab[i - 1] < tab[i])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
			}
			else
				i++;
		}
	}
}

int	main(void)
{
	int arr[] = {2,5,1,4,3};
	int size = sizeof(arr) / sizeof(arr[0]);

	ft_sort_int_tab(arr, size);
	return (0);
}
