/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:53:51 by jariza-o          #+#    #+#             */
/*   Updated: 2023/03/24 10:53:51 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int atoi(const char *str)
{
	int i = 0;
	int num = 0;

	while(str[i])
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num);
}

void hex(int num)
{
	static char hexa[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a','b', 'c', 'd', 'e', 'f'};

	if (num >= 16)
	{
		hex(num / 16);
		hex(num % 16);
	}
	else
	{
		write (1, &hex[num], 1);
	}
}

int	main(int argc, char **argv)
{
	int num = 0;
	int i = 1;

	if (argc == 2)
		hex(atoi(argv[1]));
	write (1, "\n", 1);
}
