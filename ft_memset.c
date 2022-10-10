/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:57:54 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/10 16:17:16 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Copy character of [int c] (as an unsigned char)
    to the first [size_t len] characters of the [void *str]

	before: This is string.h library function
	after: $$$$$$$ string.h library function
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = str;
	while (len--)
		*ptr++ = c;
	return (str);
}
