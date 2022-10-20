/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:19:51 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/20 17:51:36 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	// Check if passed args are valid to work with:
	if (s == NULL)
		return (NULL);
	// Start arg is invalid, string doesn't have an index at start value.
	// In this case we can use ft_strdup, since it'll fill mem with a 0 byte.
	if (start > ft_strlen(s))
		return (ft_strdup("\0"));
	// Check if the current string length, with offset, is long enough.
	if ((len > (ft_strlen(s) - start)))
		len = ft_strlen(s) - start;
	ptr = malloc((1 * len) + 1); // +1 for terminating null byte.
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
