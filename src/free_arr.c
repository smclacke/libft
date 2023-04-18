/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   free_arr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/18 20:53:30 by smclacke      #+#    #+#                 */
/*   Updated: 2023/04/18 20:55:23 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}
