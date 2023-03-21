/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:35:16 by jariza-o          #+#    #+#             */
/*   Updated: 2023/03/17 18:35:16 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int n = 0;

	while (!s)
		i++;
	while (!reject)
		n++;
	i = i - n;
	if (i < 0)
		i *= -1;
	return (i);
}