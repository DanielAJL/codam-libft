/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:33:49 by dlynch            #+#    #+#             */
/*   Updated: 2022/11/01 17:20:53 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	while (n)
	{
		if (*ptr++ == (unsigned char) c)
			return (ptr - 1);
		n--;
	}
	if (c == '\0' && (i < n))
		return (ptr + ft_strlen(s) + 1);
	return (NULL);
}

// int	main(void)
// {
// 	char	*ptr;

// 	ptr = ft_memchr("est", 't', 4);
// 	printf("%s\n", ptr);
// 	return (0);
// }
