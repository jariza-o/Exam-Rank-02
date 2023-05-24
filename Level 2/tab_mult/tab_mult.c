#include <unistd.h>

int	ft_atoi(char *str)
{
	int num = 0;
	int i = 0;

	while(str[i])
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return(num);
}

void	put_nbr(int num)
{
	char n;

	if (num >= 10)
	{
		put_nbr(num / 10);
		put_nbr(num % 10);
	}
	else
	{
		n = num + '0';
		write(1, &n, 1);
	}
}

int	main(int argc, char **argv)
{
	int num = ft_atoi(argv[1]);
	int i = 1;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while(i <= 9)
		{
			put_nbr(i);
			write(1, " x ", 3);
			put_nbr(num);
			write(1, " = ", 3);
			put_nbr(i * num);
			write(1, "\n", 1);
			i++;
		}
	}
	return(0);
}