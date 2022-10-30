/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:42:26 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/30 14:29:55 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// LONG INT used to allow int to be passed on as long int in other funcs
static	int		get_int_length(long int n);
static	char		*fill_str_with_integer(char *str, long int n, int len);

static	int	get_int_length(long int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		len = 2;
	}
	while (n >= 10)
	{
		n = n / 10;
		len ++;
	}
	return (len);
}

static	char	*fill_str_with_integer(char *str, long int n, int len)
{
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (len)
	{
		len --;
		str[len] = n % 10 + 48;
		n = n / 10;
		if (n == 0)
			break ;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		nlen;

	nlen = get_int_length(n);
	str = ft_calloc(nlen + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	fill_str_with_integer(str, n, nlen);
	return (str);
}

// int	main(void)
// {
// 	int	num1;
// 	int	num2;

// 	// num = -100;
// 	num1 = INT_MIN;
// 	num2 = INT_MAX;
// 	// printf("%d\n", num1);
// 	// printf("%d\n", num2);
// 	ft_itoa(num1);
// 	ft_itoa(num2);
// 	return (0);
// }
