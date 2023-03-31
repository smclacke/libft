/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/31 17:00:46 by smclacke      #+#    #+#                 */
/*   Updated: 2023/03/31 17:01:15 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
