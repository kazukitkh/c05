//#include <stdio.h>
int	ft_fibonacci(int index)
{
	int	k;

	k = 0;
	if (!index)
		return (0);
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*int	main(void)
{
	printf("%d", ft_fibonacci(4));
	return (0);
}*/