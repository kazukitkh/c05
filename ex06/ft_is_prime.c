#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 2;
	if (!nb || nb == 1)
		return (0);
	while (i <= nb / 2)
	{
		j = nb / i;
		if (j * i == nb)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_is_prime(7));
	return (0);
}