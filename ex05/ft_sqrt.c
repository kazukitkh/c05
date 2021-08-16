#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	while (i < nb / 2)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_sqrt(-9));
	return (0);
}