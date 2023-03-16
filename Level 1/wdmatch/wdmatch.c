/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:47:20 by jariza-o          #+#    #+#             */
/*   Updated: 2023/03/16 18:12:31 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int n = 0;

	if (argc == 3)
	{
		while (argv[2][n] != '\0' && argv[1][i] != '\0')
		{
			if (argv[1][i] == argv[2][n])
			{
				i++;
				n++;
			}
			else
				n++;
		}
		if (argv[1][i] == '\0')
		{
			i = 0;
			while (argv[1][i] != '\0')
			{
				write (1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}