/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:17:54 by jariza-o          #+#    #+#             */
/*   Updated: 2023/03/23 17:23:07 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*array;
	int rango;
	int i = 0;

	rango = end - start;
	if (rango < 0)
		rango *= -1;
	array = malloc(sizeof(int) * rango);
	if (end >= start)
	{
		while (end >= start)
		{
			array[i] = end;
			i++;
			end--;
		}
	}
	else if (start >= end)
	{
		while (start >= end)
		{
			array[i] = start;
			i++;
			start--;
		}
	}
	return (array);
}

int *ft_range(int start, int end)
{
	int *range;
	int i = 0;
	int n = end - start + 1;

	if (start > end)
		return (ft_rrange(end, start));
	range = (int *)malloc(sizeof(int) * n);
	if (range)
	{
		while (i < n)
		{
			range[i] = end;
			end--;
			i++;
		}
	}
	return (range);
}
