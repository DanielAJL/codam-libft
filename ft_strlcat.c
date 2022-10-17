/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:42:11 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/17 13:39:44 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
// {
// 	char	*ptr_dst_end;
// 	size_t	original_dst_len;
// 	size_t	iterator;

// 	ptr_dst_end = dst + ft_strlen(dst);
// 	original_dst_len = ft_strlen(dst);
// 	iterator = 0;

// 	if (dsize == 0)
// 		return (original_dst_len + ft_strlen(src));

// 	while (src[iterator] && original_dst_len < (dsize - 1))
// 	{
// 		*ptr_dst_end++ = src[iterator];
// 		iterator++;
// 		original_dst_len++;
// 	}
// 	*ptr_dst_end++ = '\0';

// 	return (ft_strlen(dst) + ft_strlen(src));
// }

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	d_len;
	size_t	s_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dsize < d_len)
		return (dsize + s_len);
	else
	{
		dst = dst + d_len;
		ft_strlcpy(dst, src, dsize - d_len);
		return (d_len + s_len);
	}
}

// int	main(void)
// {
// 	char	destination1[0xF00] = "12\034";
// 	char	source1[0xF00] = "ABCD";
// 	char	destination2[0xF00] = "12\034";
// 	char	source2[0xF00] = "ABCD";

// 	// char	s1[4] = "";
// 	// char	s2[4] = "";
// 	size_t	a;
// 	size_t	b;
// 	// a = strlcat(s1, "thx to ntoniolo for this test !", 4);
// 	// b = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
// 	// printf("%lu\n", a);
// 	// printf("%lu\n", b);
// 	// puts(s1);
// 	// puts(s2);



// 	// a = ft_strlcat(&destination1[2], &source1[2], 6);
// 	a = ft_strlcat("\0", "\0", 0);
// 	puts(destination1);

// 	// b = strlcat(&destination2[2], &source2[2], 6);
// 	b = strlcat("\0", "\0", 0);
// 	puts(destination2);

// 	printf("%lu\n", a);
// 	printf("%lu\n", b);
// 	return (0);
// }
