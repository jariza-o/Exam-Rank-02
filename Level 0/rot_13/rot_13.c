/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:18:01 by jariza-o          #+#    #+#             */
/*   Updated: 2023/03/17 18:25:02 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char ** argv)
{
	int i = 0;
	int n = 0;

	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				while (n < 13)
				{
					if (argv[1][i] != 'z')
					{
						argv[1][i] += 1;
						n++;
					}
					else
					{
						argv[1][i] = 'a';
						n++;
					}
				}
			}
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				while (n < 13)
				{
					if (argv[1][i] != 'Z')
					{
						argv[1][i] += 1;
						n++;
					}
					else
					{
						argv[1][i] = 'A';
						n++;
					}
				}
			}
			n = 0;
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}