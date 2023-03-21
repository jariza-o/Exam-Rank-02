/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:53:08 by jariza-o          #+#    #+#             */
/*   Updated: 2023/03/21 17:03:32 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;

	if (argc == 4)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);
		
		if (argv[2][0] ==  '+' )
			printf("%d", n1 + n2);
		else if (argv[2][0] ==  '-' )
			printf("%d", n1 - n2);
		else if (argv[2][0] ==  '*' )
			printf("%d", n1 * n2);
		else if (argv[2][0] ==  '/' )
			printf("%d", n1 / n2);
		else if (argv[2][0] == '%')
			printf("%d", n1 % n2);
	}
	printf ("\n");
	return (0);
}