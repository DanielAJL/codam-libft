/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:34:58 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/19 15:56:33 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Both strings are assumed to be n bytes long
	so we don't need to check if s1/s2 ends.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = memcmp("TESTING", "TESTINA", 7);
// 	y = ft_memcmp("TESTING", "TESTINA", 7);
// 	printf("%d\n", x);
// 	printf("%d\n", y);
// 	return (0);
// }
