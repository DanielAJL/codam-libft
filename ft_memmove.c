/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:39:54 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/13 19:47:00 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memmove() function copies len bytes from string src to string dst.
// The two strings may overlap; the copy is always done in a
// non-destructive manner.
// The memmove() function returns the original value of dst.

/**
Void pointers can be converted to any value without typecasting, as long
as the designated data type is also a pointer.

So void pointer can go into char pointer, int pointer etc WITHOUT typecasting.
*/

// { src  [  }  dst ]
// [ dst  {  ]  src }


#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*data_dst;
	const char	*data_src;
	char		*last_dst;
	char		*last_src;

	data_dst = dst;
	data_src = src;
	if (!dst && !src)
		return (0);
	if (data_dst < data_src)
	{
		while (len--)
			*data_dst++ = *data_src++;
	}
	else
	{
		last_src = (char *)data_src + (len - 1);
		last_dst = data_dst + (len - 1);
		while (len--)
			*last_dst-- = *last_src--;
	}
	return (dst);
}

// int main() {
//     char data[] = "Hello!";
//     ft_memmove(&data[0], &data[1], 5); // shift {'e', 'l', 'l', 'o', '!'} one byte backwards
// 	puts(data); // should print "ello!!"

//     char data1[] = "Hello!";
// 	memmove(&data1[0], &data1[1], 5); // shift {'e', 'l', 'l', 'o', '!'} one byte backwards
//     puts(data1); // should print "ello!!"


// 	char data2[] = "Again!";
//     ft_memmove(&data2[2], &data2[0], 4); // shift {'A', 'g', 'a', 'i'} 2 bytes forwards
// 	puts(data2);

// 	char data3[] = "Again!";
// 	memmove(&data3[2], &data3[0], 4); // shift {'A', 'g', 'a', 'i'} 2 bytes forwards
//     puts(data3); // should print "AgAgai"
//     return 0;
// }
