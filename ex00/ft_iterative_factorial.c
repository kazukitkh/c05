//#include <stdio.h>
int ft_iterative_factorial(int nb)
{
	int	i;
	int	k;

	k = 1;
	i = 0;
    if (nb < 0)
		return (0);
	while (nb - i - 1)
	{
		k *= nb - i;
		i ++;
	}
	return (k);
}

/*int main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}*/