/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_arrlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/31 18:53:57 by smclacke      #+#    #+#                 */
/*   Updated: 2023/04/07 15:28:28 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_arrlen(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

// int	main(int argc, char **argv)
// {
// 	if (argc < 20)
// 	{
// 		printf("%s\n", *argv);
// 		printf("%d\n", ft_arrlen(argv));
// 	}
// }
