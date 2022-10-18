/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:37:22 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/18 15:37:33 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	compare char as unsgined characters, so that `\200' is greater than `\0'.
	since: ---->
	A signed char is same as an ordinary char and has a range from -128 to +127;
	whereas, an unsigned char has a range from 0 to 255.

	To test this we can pass "\0x80" as a string which is hexidecimal for 128.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s_copy1;
	unsigned char	*s_copy2;
	size_t			i;

	s_copy1 = (unsigned char *) s1;
	s_copy2 = (unsigned char *) s2;
	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s_copy1[i] != s_copy2[i])
		{
			if (s_copy1[i] > s_copy2[i])
				return (1);
			if (s_copy1[i] < s_copy2[i])
				return (-1);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	x;
// 	int	y;
// 	x = ft_strncmp("\x80", "Heloo", 5);
// 	y = strncmp("\x80", "Heloo", 5);
// 	printf("%d\n", x);
// 	printf("%d\n", y);
// 	return (0);
// }
