/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:01:24 by jariza-o          #+#    #+#             */
/*   Updated: 2023/03/30 17:01:24 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i] == 32 || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] != 32 && argv[1][i] != '\t')
				write (1, &argv[1][i], 1);
			else if ((argv[1][i] == 32 || argv[1][i] == '\t') && (argv[1][i + 1] != 32 && argv[1][i + 1] != '\t'))
				write (1, " ", 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}