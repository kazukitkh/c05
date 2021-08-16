//#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	int	a;

	a = 0;
	if (!power)
		return (1);
	if (!nb)
		return (0);
	if (power < 0)
	{
		nb = 1 / nb;
		power *= -1;
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main(void)
{
	printf("%d", ft_recursive_power(4, 0));
	return (0);
}*/