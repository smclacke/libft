/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lower_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SarahLouise <SarahLouise@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 22:17:06 by smclacke          #+#    #+#             */
/*   Updated: 2023/03/28 02:06:03 by SarahLouise      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lower_str(char *str)
{
	char	*lowercase_str;
	int		len;
	int		i;

	i = 0;
	lowercase_str = ft_strdup(&str[i]);
	len = ft_strlen(lowercase_str);
	while (i < len)
	{
		lowercase_str[i] = ft_tolower(lowercase_str[i]);
		i++;
	}
	return (lowercase_str);
}
