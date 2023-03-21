/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:36:03 by jariza-o          #+#    #+#             */
/*   Updated: 2023/03/21 18:07:03 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int n = 1;
	int	i = 0;

	if (argc >= 2)
	{
		while (argv[n])
		{
			while (argv[n][i])
			{
				if (argv[n][i] >= 'A' && argv[n][i] <= 'Z')
					argv[n][i] += 32;
				i++;
			}
			i = 0;
			while (argv[n][i])
			{
				if ((argv[n][i] >= 'a' && argv[n][i] <= 'z') && (argv[n][i - 1] == ' ' || argv[n][i - 1] == '\t'))
					argv[n][i] -= 32;
				write (1, &argv[n][i], 1);
				i++;
			}
			write (1, "\n", 1);
			i = 0;
			n++;
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}