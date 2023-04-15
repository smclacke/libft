/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/24 15:39:55 by smclacke      #+#    #+#                 */
/*   Updated: 2023/04/15 19:25:11 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		neg;
	long	num;
	int		i;

	i = 0;
	neg = 1;
	num = 0;
	while (ft_isspace(str[i]))
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
	if ((num * neg) > INT_MAX || (num * neg) < INT_MIN)
	{
		ft_error();
		return (0);
	}
	return (num * neg);
}

int	main()
{
	// char	*str = "345";
	// char	*too_small_str = "-2147483649";
	// char	*too_big_str = "2147483649";
	
	printf("atoi 89: %d\n", ft_atoi("89"));
	printf("atoi -2147483649: %d\n", ft_atoi("-2147483649"));
	printf("atoi 2147483649: %d\n", ft_atoi("2147483649"));
	// printf("str: %s\n", str);
	// printf("too_small_str: %s\n", too_small_str);
	// printf("too_big_str: %s\n", too_big_str);
	// int	i = ft_atoi(str);
	// int	j = ft_atoi(too_small_str);
	// int	k = ft_atoi(too_big_str);
	// printf("i: %d\n", i);
	// printf("j: %d\n", j);
	// printf("k: %d\n", k);
	// printf("atoi: %d\n", ft_atoi("-2147483649"));
	// printf("atoi: %d\n", ft_atoi("89"));
}
	// printf("result: %ld\n, num: %d\n, neg: %d\n", result, num, neg);
		// result += num * neg;
	// printf("result: %ld\n", result);
	// if (result > INT_MAX || result < INT_MIN)
	// 	ft_error();
	// printf("result: %ld\n", result);
	// if (result > INT_MAX || result < INT_MIN)
	// {
	// 	printf("im here\n");
	// 	ft_error();
	// 	return (42);
	// }
