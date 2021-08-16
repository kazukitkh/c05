int ft_iterative_factorial(int nb)
{
    if (nb < 0)
        return (0);
    else if (nb > 0)
    {
        if ((nb * ft_iterative_factorial(nb - 1)) > 2147483647)
            return (0);
        return (nb * ft_iterative_factorial(nb - 1));
    }
    else
        return (1);
}