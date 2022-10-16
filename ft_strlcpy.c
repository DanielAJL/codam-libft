/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:08:03 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/15 13:41:48 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
STEP 1): Create a src placeholder and an iterator variable.
STEP 2): Set src placeholder pointer to point to src pointer + set iterator = 0.
STEP 3): Check if dsize == 0, if true return src length.
STEP 4): If dsize > 0, loop while src[i] exists and i < (dsize - 1).
STEP 5): For every loop, copy src[i] into dst[i] and increment i.
STEP 6): If src[i] does not exist OR i has reached dsize - 1, exit loop.
STEP 7): Add a terminating null to account for the dsize "-1".
STEP 8): Return the src length.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	char	*source_copy;
	size_t	i;

	source_copy = (char *) src;
	i = 0;
	if (!dsize)
		return (ft_strlen(src));
	while (src[i] && i <= (dsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	destination[50] = "This is bad!";
// 	char	destination2[50] = "This is bad!";
// 	char	source[] = "Amazing!";

// 	strlcpy(&destination[8], &source[0], sizeof(char) * 42);
// 	puts(destination);

// 	ft_strlcpy(&destination2[8], &source[0], sizeof(char) * 42);
// 	puts(destination2);

// 	return (0);
// }
