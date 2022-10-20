/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:17:59 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/20 16:18:05 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The calloc() function contiguously allocates enough space for count objects
that are size bytes of memory each and returns a pointer to the allocated
memory.  The allocated memory is filled with bytes of value zero.
*/

// MALLOC EXAMPLE (NOT CALLOC) ptr = (int*) malloc(100 * sizeof(int));

/*
When changing '\0' to '0' it doesn't work on empty strings?
Why is this the case? Man says fill with '0's, not terminating '0's.
*/

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, (count * size));
	return (ptr);
}

// int	main(void)
// {
// 	int     size = 8539;

// 	void * d1 = ft_calloc(size, sizeof(int));

// 	void * d2 = calloc(size, sizeof(int));
// 	if (memcmp(d1, d2, size * sizeof(int)))
// 		printf("failed");
// 	return (0);
// }
