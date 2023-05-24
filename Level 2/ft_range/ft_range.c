/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:32:58 by jariza-o          #+#    #+#             */
/*   Updated: 2023/04/03 16:32:58 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *range;
	int i;
	int nums = start - end;

	if (end > start)
		nums *= -1;
	range = malloc(sizeof(char) * (nums + 1));
	if (range == NULL)
		return (NULL);
	if (start > end)
	{
		while (start >= end)
		{
			range[i] = start;
			i++;
			start--;
		}
	}
	else if (end > start)
	{
		while (end >= start)
		{
			range [i] = start;
			i++;
			start++;
		}
	}
	return (range);
}