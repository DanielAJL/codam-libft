/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:37:51 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/18 16:12:19 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// i = haystack ptr iterator
// j = needle in haystack match count

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!ft_strlen(needle) || !n)
		return ((char *)haystack);
	while (haystack[i] && (i < n))
	{
		if (haystack[i] == needle[j])
		{
			if (ft_strlen(needle) == j + 1)
				return (((char *)haystack + i) - j);
			j++;
		}
		else
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
//     // const char input[] = "ABC ABCDAB ABCDABCDABDE";
//     // const char *result = strstr (input, "ABCDABD");

// 	char	*ptr1;
// 	char	*ptr2;
// 	ptr1 = ft_strnstr("ABC ABCDAB ABCDABCDABDEEEE", "ABCDABD", 25);
// 	ptr2 = strnstr("ABC ABCDAB ABCDABCDABDEEEE", "ABCDABD", 25);

// 	puts(ptr1);
// 	puts(ptr2);
// 	return (0);
// }
