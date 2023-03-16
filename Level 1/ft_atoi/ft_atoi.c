/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:14:07 by jariza-o          #+#    #+#             */
/*   Updated: 2023/03/16 18:41:02 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int re = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 32 || str[i] == '\t')
			i++;
		else if (str[i] == '+')
			i++;
		else if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			re *= 10;
			re += str[i] - '0';
			i++;
		}
		else
			break;

	}
	if (sign == -1)
		re *= -1;
	return (re);
}

int main (int argc, char **argv)
{
	int n;
	n = ft_atoi(argv[1]);
	printf("%d", n);
}