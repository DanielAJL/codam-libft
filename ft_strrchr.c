/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:38:40 by dlynch            #+#    #+#             */
/*   Updated: 2022/11/01 15:50:54 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	ptr = (char *) s;
	i = ft_strlen(s);
	if ((char) c == '\0')
		return (ptr + i);
	i--;
	while (i > -1 && s[i])
	{
		if (s[i] == (char) c)
			return (ptr + i);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*ptr1;
// 	char	*ptr2;

// 	// ptr1 = ft_strrchr("ABCEABCZE\0", 'Z');
// 	// ptr2 = strrchr("ABCEABCZE\0", 'Z');
// 	// Check if ptr1 && ptr2 - 1 = Z and not C (to target last occurance).

// 	ptr1 = ft_strrchr("teste", 'x');
// 	ptr2 = strrchr("teste", 'x');

// 	puts(ptr1);
// 	puts(ptr2);
// 	return (0);
// }
