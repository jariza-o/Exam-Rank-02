/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 22:11:06 by jariza-o          #+#    #+#             */
/*   Updated: 2023/03/30 22:11:06 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
    int num = nbr;
    int len = 0;
    char *str;

	if(nbr >= 0)
		len++;
	while (num)
	{
		len++;
		num /= 10;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	len--;
	if (nbr < 0)
	{
		str[0] = "-";
		nbr *= -1;
	}
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (nbr)
	{
		str[len] = (nbr % 10) - '0';
		nbr /= 10;
		len--;
	}
	return (str);
}