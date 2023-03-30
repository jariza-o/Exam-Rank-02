/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:11:31 by jariza-o          #+#    #+#             */
/*   Updated: 2023/03/30 17:11:31 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int n = 1;
	int i = 0;

	if (argc > 1)
	{
		while (n < argc)
		{
			if (n != argc - 1 && n != 1)
				write (1, "\n", 1);
			while (argv[n][i])
			{
				if ((argv[n][i] >= 'a' && argv[n][i] <= 'z') && (argv[n][i + 1] == 32 || argv[n][i + 1] == '\t' || argv[n][i + 1] == '\0'))
				{
					argv[n][i] -= 32;
					write (1, &argv[n][i], 1);
				}
				else if ((argv[n][i] >= 'a' && argv[n][i] <= 'z') && (argv[n][i + 1] != 32 || argv[n][i + 1] != '\t' || argv[n][i + 1] != '\0'))
					write (1, &argv[n][i], 1);
				else if ((argv[n][i] >= 'A' && argv[n][i] <= 'Z') && (argv[n][i + 1] != 32 || argv[n][i + 1] != '\t' || argv[n][i + 1] != '\0'))
				{
					argv[n][i] += 32;
					write (1, &argv[n][i], 1);
				}
				else
					write(1, &argv[n][i], 1);
				i++;
			}
			n++;
		}
	}
	write (1, "\n", 1);
	return (0);
}