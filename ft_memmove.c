/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:39:54 by dlynch            #+#    #+#             */
/*   Updated: 2022/11/03 17:48:19 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// { src  [  }  dst ]
// [ dst  {  ]  src }

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*src_copy;
	char		*dest_copy;
	char		*temp;

	src_copy = src;
	dest_copy = dest;
	if ((!dest && !src) || !n)
		return (dest);
	if (dest < src)
	{
		while (n--)
			*dest_copy++ = *src_copy++;
	}
	else
	{
		temp = dest + (n - 1);
		src_copy = src + (n - 1);
		while (n--)
			*temp-- = *src_copy--;
	}
	return (dest);
}

// int main() {
//     char data[] = "Hello!";
// // shift {'e', 'l', 'l', 'o', '!'} one byte backwards
//     ft_memmove(&data[0], &data[1], 5);
// 	puts(data); // should print "ello!!"

//     char data1[] = "Hello!";
// // shift {'e', 'l', 'l', 'o', '!'} one byte backwards
// 	memmove(&data1[0], &data1[1], 5);
//     puts(data1); // should print "ello!!"

// 	char data2[] = "Again!";
// 	// puts(data2);
// // shift {'A', 'g', 'a', 'i'} 2 bytes forwards
//     ft_memmove(&data2[2], &data2[0], 4);
// 	puts(data2);

// 	char data3[] = "Again!";
// 	// puts(&data3[2]);
// // shift {'A', 'g', 'a', 'i'} 2 bytes forwards
// 	memmove(&data3[2], &data3[0], 4);
//     puts(data3); // should print "AgAgai"
//     return 0;
// }
