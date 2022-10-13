/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:24:45 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/13 19:30:59 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copy n bytes of block of data from source to destination.
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*copy_dst;
	const char	*copy_src;

	copy_dst = dst;
	copy_src = src;
	if (!dst && !src)
		return (0);
	while (n--)
		*copy_dst++ = *copy_src++;
	return (dst);
}
