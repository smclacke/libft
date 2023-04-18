/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/24 15:39:55 by smclacke      #+#    #+#                 */
/*   Updated: 2023/04/18 17:05:00 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_atoi(const char *str)
// {
// 	int		neg;
// 	long	num;
// 	int		i;

// 	i = 0;
// 	neg = 1;
// 	num = 0;
// 	while (ft_isspace(str[i]))
// 		i++;
// 	if (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 			neg *= -1;
// 		i++;
// 	}
// 	while (ft_isdigit(str[i]))
// 	{
// 		num = num * 10 + (str[i] - 48);
// 		i++;
// 	}
// 	if ((num * neg) > INT_MAX || (num * neg) < INT_MIN)
// 		write(1, "NOPE\n", 10);
// 	return (num * neg);
// }



int	ft_atoi(const char *str)
{
	long	neg;
	long	num;
	long	i;
	long 	result;

	i = 0;
	neg = 1;
	num = 0;
	result = 0;
	while ((ft_isspace(str[i])))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	result += num * neg;
	if (!(result > INT_MAX || result < INT_MIN))
		return (num * neg);
	else
	{
		printf("error atoi\n");
		return (EXIT_FAILURE);
	}
}
