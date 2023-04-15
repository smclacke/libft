/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/24 15:39:55 by smclacke      #+#    #+#                 */
/*   Updated: 2023/04/15 17:16:11 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	neg;
	int	num;
	int	i;
	long result;

	i = 0;
	neg = 1;
	num = 0;
	while ((str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	result += num * neg;
	// printf("result: %ld\n, num: %d\n, neg: %d\n", result, num, neg);
	if (result > INT_MAX || result < INT_MIN)
	{
		printf("im here\n");
		ft_error();
		return ;
	}
	return (num * neg);
}

// int	main()
// {
// 	char	*str = "49";
// 	// printf("before: %s\n", str);
// 	ft_atoi(str);
// 	// printf("after: %s\n", str);
// 	// printf("atoi: %d\n", ft_atoi("-2147483649"));
// 	// printf("atoi: %d\n", ft_atoi("89"));
// }
