//#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	k;

	k = 1;
	if (power < 0)
		return (0);
	while (power)
	{
		k *= nb;
		power--;
	}
	return (k);
}

/*int	main(void)
{
	printf("%d", ft_iterative_power(4, 3));
	return (0);
}*/