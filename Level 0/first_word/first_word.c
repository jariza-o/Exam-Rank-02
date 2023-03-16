/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jariza-o <jariza-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:26:25 by jariza-o          #+#    #+#             */
/*   Updated: 2023/03/16 17:39:08 by jariza-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int letter = 0;

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if ((argv[1][i] == 32 || argv[1][i] == '\t') && letter == 1)
                break;
            else if (argv[1][i] == 32 || argv[1][i] == '\t')
                i++;
            else
            {
                write (1, &argv[1][i], 1);
                letter = 1;
                i++;
            }
        }
    }
    write (1, "\n", 1);
    return (0);
}