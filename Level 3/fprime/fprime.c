/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:35:55 by jariza-o          #+#    #+#             */
/*   Updated: 2023/03/27 17:35:55 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	int i = 2;
	int num;

	if (argc == 2)
	{
		if (num == 1)
			printf("1");
		num = atoi(argv[1]);
		while (num >= i == 0)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				if (num == i)
					break;
				printf ("*");
				num /= i;
				i = 2;
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}