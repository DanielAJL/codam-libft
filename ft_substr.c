/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:19:51 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/20 18:03:05 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Start arg is invalid, string doesn't have an index at start value.

// In this case we can use ft_strdup, since it'll fill mem with a 0 byte.

// Check if the current string length, with offset, is long enough.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup("\0"));
	if ((len > (ft_strlen(s) - start)))
		len = ft_strlen(s) - start;
	ptr = malloc((1 * len) + 1);
	if (!ptr)
		return (NULL);
	while (s[start] && i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
