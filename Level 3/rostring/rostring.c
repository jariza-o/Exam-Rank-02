/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:49:33 by jariza-o          #+#    #+#             */
/*   Updated: 2023/03/17 16:16:40 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int n = 0;
	char	*first = 0;

	if (argc == 2)
	{
		while (argv[1][i] == 32 || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != 32 || argv[1][i] != '\t')
		{
		first[n] = argv[1][i];
		i++;
		n++;
		}
		while (argv[1][i] == 32 || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\0')
		{
			if (argv [1][i] != 32 || argv[1][i] == '\t')
			{
				write (1, &argv[1][i], 1);
				i++;
			}
			else if (argv[1][i] == 32 || argv[1][i] == '\t')
			{
				write (1, " ", 1);
				i++;
				while (argv[1][i] == 32 || argv[1][i] == '\t')
					i++;
			}
		}
		write (1, " ", 1);
		n = 0;
		while (first[n] != '\0')
		{
			write (1, &first[n], 1);
			n++;
		}
	}
	write(1, "\n", 1);
	return (0);
}