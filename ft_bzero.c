/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:19:18 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/12 18:16:49 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
String ends at terminated null '\0'.
FT_BZERO starts at the beginning of string, thus immediately terminating it.
String should always be empty, unless 0 passed as n?
*/
#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{	
	char	*string;

	string = (char *) s;
	ft_memset(string, '\0', n);
	return (string);
}

int	main(void)
{
	char	str[7];

	str[0] = 'A';
	str[1] = 'B';
	str[2] = 'C';
	str[3] = 'D';
	str[4] = ' ';
	str[5] = 'X';
	str[6] = 'Y';
	printf("Before bzero => %s", str);
	ft_bzero(str, 0);
	bzero(str, 0);
	printf("\nAfter bzero => %s\n", str);
	printf("Before bzero => %s", str);
	ft_bzero(str, 5);
	bzero(str, 5);
	printf("\nAfter bzero => %s\n", str);
	return (0);
}
