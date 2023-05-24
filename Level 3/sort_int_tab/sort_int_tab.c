#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int menor = tab[i];
	int *ord = 0;
	unsigned int n = 0;

	while(tab[i])
	{
		if (menor > tab[i])
			menor = tab[i];
		i++;
	}
	while(n <= (size - 1))
	{
		i = 0;
		while(tab[i])
		{
			if (menor == tab[i])
			{
				ord[n] = tab[i];
				n++;
			}
			i++;
		}
		menor++;
	}
	tab = ord;
}

int	main(void)
{
	int	size = 10;
	int	nums[10] = {4, 1, -3, 0, -2, 2, 3, -1, 0, -4};
	int i;

	i = 0;
	printf("Este es el array de int inicial:\n");
	while (i < size)
	{
		printf("%i ", nums[i]);
		i++;
	}
	sort_int_tab(nums, size);
	printf("\nEste es el array de int ordenado:\n");
	i = 0;
	while (i < size)
	{
		printf("%i ", nums[i]);
		i++;
	}
	printf("\n---FIN DEL PROGRAMA---\n");
	return (0);
}