#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int n = 0;

	if (argc == 2)
	{
		while(argv[1][i] != '\0')
			i++;
		while(i >= 0)
		{
			while((argv[1][i] != ' ' && argv[1][i] != '\t') && i > 0)
				i--;
			n = i;
			i--;
			if (n != 0)
				n++;
			while(argv[1][n] != ' ' && argv[1][n] != '\t' && argv[1][n] != '\0')
			{
				write(1, &argv[1][n], 1);
				n++;
			}
			if (i > 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}