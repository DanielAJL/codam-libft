/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:35:53 by dlynch            #+#    #+#             */
/*   Updated: 2022/11/01 14:12:52 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	if ((char) c == '\0')
		return ((char *) s + ft_strlen(s));
	ptr = (char *) s;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return (ptr + i);
		i++;
	}
	if (c == '\0')
		return (ptr + i);
	return (0);
}

// int	main(void)
// {
// 	char	*ptr1;
// 	char	*ptr2;
// 	// char s[] = "tripouille";

// 	ptr1 = ft_strchr("teste", 1024);
// 	// ptr1 = ft_strchr("fdsf\0fdsf", '\0');
// 	ptr2 = strchr("teste", 1024);

// 	puts(ptr1);
// 	puts(ptr2);
// 	return (0);
// }
