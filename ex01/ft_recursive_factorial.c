//#include <stdio.h>
int ft_iterative_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb > 0)
		return (nb * ft_iterative_factorial(nb - 1));
	else
		return (1);
}

/*int main(void)
{
	printf("%d", ft_iterative_factorial(386982));
	return (0);
}*/