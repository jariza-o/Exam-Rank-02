/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 22:57:15 by jariza-o          #+#    #+#             */
/*   Updated: 2023/04/27 22:57:15 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char	bit;

	while (i >= 0)
	{
		bit = bit * 2 + (octet % 2);
		octet /= 2;
		i--;
	}
	return (bit);
}