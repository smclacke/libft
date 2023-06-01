/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split_quotes.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: SarahLouise <SarahLouise@student.codam.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/11 23:03:34 by SarahLouise   #+#    #+#                 */
/*   Updated: 2023/06/01 23:10:10 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//this needs a lot of work

static int	ft_quotes_delimiter(char **arr)
{
	char	quote;
	int		len;

	quote = **arr;
	len = 0;
	(*arr)++;
	while (**arr != quote && **arr != '\0')
	{
		len++;
		(*arr)++;
	}
	return (len);
}

static int	ft_arr_len(char **arr, char c)
{
	int		len;

	len = 0;
	while (**arr != '\0' && **arr == c)
		(*arr)++;
	if (**arr == '\'' || **arr == '\"')
		return (ft_quotes_delimiter(arr));
	while (**arr != c && **arr != '\0')
	{
		(*arr)++;
		len++;
	}
	return (len);
}

static	int	ft_no_str(char const *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 1;
	while (str[i])
	{
		if (str[i] != c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split_quotes(char const *str, char c)
{
	char	**arr;
	int		no_str;
	char	*next;
	int		len;
	int		i;

	no_str = ft_no_str(str, c);
	arr = (char **)malloc(sizeof(char *) * (no_str + 1));
	if (!arr)
		return (NULL);
	next = (char *)str;
	i = 0;
	len = 0;
	while (i < no_str)
	{
		len = ft_arr_len(&next, c);
		arr[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!arr[i])
			return (ft_free_arr(arr), NULL);
		ft_strlcpy(arr[i], next - len, len + 1);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
