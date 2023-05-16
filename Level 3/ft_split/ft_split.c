#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str)
{
	int i = 0;
	int words = 0;
	char **frase;
	int n = 0;
	int len = 0;

	int j = 0;
	int k = 0;

	while(str[i] == 32 || str[i] == '\t' || str[i] == '\n')
		i++;
	while(str[i])
	{
		if (str[i] == 32 || str[i] == '\t' || str[i] == '\n')
		{
			words++;
			i++;
			while(str[i] == 32 || str[i] == '\t' || str[i] == '\n')
				i++;
		}
		else
			i++;
	}
	if (str[i - 1] != 32 && str[i - 1] != '\t' && str[i - 1] != '\n')
		words++;
	
	frase = (char **)malloc(sizeof(char *) * (words + 1));
	if (frase == NULL)
		return(NULL);
	
	i = 0;

	while(str[i])
	{
		while(str[i] == 32 || str[i] == '\t' || str[i] == '\n')
			i++;
		k = 0;
		n = i;
		len = 0;
		while(str[n] != 32 && str[n] != '\t' && str[n] != '\n' && str[n] != '\0')
		{
			n++;
			len++;
		}
		frase[j] = (char *)malloc(sizeof(char) * (len + 1));
		if (frase == NULL)
			return(NULL);
		while(str[i] != 32 && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		{
			frase[j][k] = str[i];
			k++;
			i++;
		}
		j++;
	}
	return(frase);
}

int	main(void)
{
	char *str = "HOLA ADIOS";
	char **split;

	split = ft_split(str);
	
	int i = 0;
	while(split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
}
